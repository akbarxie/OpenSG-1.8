/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *             Copyright (C) 2000-2002 by the OpenSG Forum                   *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/
//-------------------------------
// Includes  
//-------------------------------

#ifdef __hpux // prevent int32 clash (model.h/tiff.h)  
#define _INT32
#endif

#include <stdlib.h>
#include <stdio.h>

#include "OSGConfig.h"

#include "OSGTIFImageFileType.h"

#ifdef OSG_WITH_TIF
#include <tiffio.h>
#endif
#include <OSGLog.h>

#include <iostream>

#ifndef OSG_DO_DOC
#    ifdef OSG_WITH_TIF
#        define OSG_TIF_ARG(ARG) ARG
#    else
#        define OSG_TIF_ARG(ARG)
#    endif
#else
#    define OSG_TIF_ARG(ARG) ARG
#endif


OSG_USING_NAMESPACE


/*! \class osg::TIFImageFileType 
    \ingroup GrpSystemImage
  
Image File Type to read/write and store/restore Image objects as
TIF (tif/tiff suffix) data.

To be able to load TIFF images you need the IJG TIFF library, 
(check the Prerequisites page on www.opensg.org). 
The lib comes with all Linux distributions.

You have to --enable-tif in the configure line to enable
the singleton object.
      
*/

#ifdef OSG_WITH_TIF

static tsize_t isReadProc(thandle_t fd, tdata_t buf, tsize_t size)
{
    std::istream *is = reinterpret_cast<std::istream*>(fd);
    is->read(static_cast<char*>(buf), size);
    return is->gcount();
}

static tsize_t osReadProc(thandle_t fd, tdata_t buf, tsize_t size)
{
    return 0;
}

static tsize_t isWriteProc(thandle_t fd, tdata_t buf, tsize_t size)
{
    return 0;
}

static tsize_t osWriteProc(thandle_t fd, tdata_t buf, tsize_t size)
{
    std::ostream *os = reinterpret_cast<std::ostream*>(fd);
    os->write(static_cast<char*>(buf), size);
    return os->good() ? size : 0;
}

static toff_t isSeekProc(thandle_t fd, toff_t off, int i)
{
    std::istream *is = reinterpret_cast<std::istream*>(fd);
    switch (i)
    {
    case SEEK_SET:
        is->seekg(off, std::ios::beg);
        break;
    case SEEK_CUR:
        is->seekg(off, std::ios::cur);
        break;
    case SEEK_END:
        is->seekg(off, std::ios::end);
        break;
    }
    return is->tellg();
}

static toff_t osSeekProc(thandle_t fd, toff_t off, int i)
{
    std::ostream *os = reinterpret_cast<std::ostream*>(fd);
    switch (i)
    {
    case SEEK_SET:
        os->seekp(off, std::ios::beg);
        break;
    case SEEK_CUR:
        os->seekp(off, std::ios::cur);
        break;
    case SEEK_END:
        os->seekp(off, std::ios::end);
        break;
    }
    return os->tellp();
}

static int closeProc(thandle_t fd)
{
    return 0; // no action necessary
}

static toff_t isSizeProc(thandle_t fd)
{
    std::istream *is = reinterpret_cast<std::istream*>(fd);
    std::ios::pos_type pos = is->tellg();
    is->seekg(0, std::ios::end);
    std::ios::pos_type size = is->tellg();
    is->seekg(pos, std::ios::beg);
    return size;
}

static toff_t osSizeProc(thandle_t fd)
{
    std::ostream *os = reinterpret_cast<std::ostream*>(fd);
    std::ios::pos_type pos = os->tellp();
    os->seekp(0, std::ios::end);
    std::ios::pos_type size = os->tellp();
    os->seekp(pos, std::ios::beg);
    return size;
}

static int mapFileProc(thandle_t fd, tdata_t *buf, toff_t *size)
{
    return 0;
}

static void unmapFileProc(thandle_t fd, tdata_t buf, toff_t size) {}

static void warningHandler (const char *module, const char *fmt, va_list ap)
{
    Char8   buffer[4096];

#ifdef OSG_HAS_VSNPRINTF
    vsnprintf(buffer, sizeof(buffer) - 1, fmt, ap);
#else
    vsprintf(buffer, fmt, ap);
#endif

    FWARNING (("TiffLib: %s;%s\n", module ? module : "Mod", buffer));
}

static void errorHandler (const char *module, const char *fmt, va_list ap)
{
    Char8   buffer[4096];

#ifdef OSG_HAS_VSNPRINTF
    vsnprintf(buffer, sizeof(buffer) - 1, fmt, ap);
#else
    vsprintf(buffer, fmt, ap);
#endif

    FFATAL (("TiffLib: %s;%s\n", module ? module : "Mod", buffer));
}

static void put16bitbwtile(
    TIFFRGBAImage* img,
    uint32* cp,
    uint32 x, uint32 y,
    uint32 w, uint32 h,
    int32 fromskew, int32 toskew,
    unsigned char* pp)
{
    int samplesperpixel = img->samplesperpixel;
    uint16 *dst = (uint16*) (cp - (y * img->width + x) / 2);
    while (h-- > 0)
    {
        uint16 *wp = (uint16 *) pp;
        for (x = w; x-- > 0;)
        {
            *dst++ = *wp;
            pp += 2 * samplesperpixel;
            wp += samplesperpixel;
        }
        dst += toskew;
        pp += fromskew;
    }
}

#endif // OSG_WITH_TIF

// Static Class Varible implementations:
static const Char8 *suffixArray[] = {
  "tif", "tiff"
};

TIFImageFileType TIFImageFileType:: _the("image/tiff",
                                         suffixArray, sizeof(suffixArray),
                                         OSG_READ_SUPPORTED | 
                                         OSG_WRITE_SUPPORTED);

/* enum VecBase::VectorSizeE
 * brief 
*/

/* var VecBase::VectorSizeE VecBase::_iSize
 *
*/

/* const char *VecBase::getClassName(void)
 *  brief Classname
*/

/* var ValueTypeT VecBase:: _value[Size];
 * brief value store
*/

/*****************************
 *   Types
 *****************************/

/*****************************
 *  Classvariables
 *****************************/

/********************************
 *  Class methodes
 *******************************/

//-------------------------------------------------------------------------
/*!
Class method to get the singleton Object
*/
TIFImageFileType& TIFImageFileType::the(void)
{
    return _the;
}


/*******************************
*public
*******************************/

//-------------------------------------------------------------------------
/*!
Tries to fill the image object with the data read from
the given input stream. Returns true on success.
*/
bool TIFImageFileType::read(ImagePtr &OSG_TIF_ARG(image), std::istream &OSG_TIF_ARG(is),
                            const std::string &OSG_TIF_ARG(mimetype))
{
#ifdef OSG_WITH_TIF

    TIFF *in = TIFFClientOpen("dummy", "rm", 
                              reinterpret_cast<thandle_t>(&is),
                              isReadProc, isWriteProc, isSeekProc, closeProc,
                              isSizeProc, mapFileProc, unmapFileProc);
    if (in == 0)
        return false;

    float res_x, res_y;
    uint16 res_unit;
    TIFFGetField(in, TIFFTAG_XRESOLUTION, &res_x);
    TIFFGetField(in, TIFFTAG_YRESOLUTION, &res_y);
    TIFFGetField(in, TIFFTAG_RESOLUTIONUNIT, &res_unit);
    if (res_unit == RESUNIT_CENTIMETER)
    {
        // convert it to dpi.
        res_x *= 2.54f;
        res_y *= 2.54f;
        res_unit = Image::OSG_RESUNIT_INCH;
    }

    uint16 bpp;
    TIFFGetFieldDefaulted(in, TIFFTAG_SAMPLESPERPIXEL, &bpp);
    if (bpp == 4)
    {   // accept unspecified extra samples as associated alpha
        uint16 *sampleinfo;
        uint16 extrasamples;
        TIFFGetFieldDefaulted(in, TIFFTAG_EXTRASAMPLES, &extrasamples,
                              &sampleinfo);
        if (sampleinfo && sampleinfo[0] == EXTRASAMPLE_UNSPECIFIED)
        {
            uint16 si = EXTRASAMPLE_ASSOCALPHA;
            TIFFSetField(in, TIFFTAG_EXTRASAMPLES, 1, &si);
        }
    }

    char errorMessage[1024];
    if (TIFFRGBAImageOK(in, errorMessage) == 0)
    {
        SWARNING << "Tiff reader failed: " << errorMessage << std::endl;
        TIFFClose(in);
        return false;
    }

    TIFFRGBAImage img;
    if (TIFFRGBAImageBegin(&img, in, 1, errorMessage) == 0)
    {
        SWARNING << "Tiff reader failed: " << errorMessage << std::endl;
        TIFFClose(in);
        return false;
    }

    Image::PixelFormat type = Image::OSG_INVALID_PF;
    Image::Type dataType = Image::OSG_UINT8_IMAGEDATA;
    switch (img.samplesperpixel)
    {
    case 1:
        type = Image::OSG_L_PF;
        if (img.bitspersample == 16)
            dataType = Image::OSG_UINT16_IMAGEDATA;
        break;
    case 2:
        type = Image::OSG_LA_PF;
        break;
    case 3:
        type = Image::OSG_RGB_PF;
        break;
    case 4:
        type = Image::OSG_RGBA_PF;
        break;
    }

    image->set(type, img.width, img.height, 1, 1, 1, 0.0, 0, dataType);
    image->setResX(res_x);
    image->setResY(res_y);
    image->setResUnit(res_unit);

    if ((img.samplesperpixel == 1) && (img.bitspersample == 16))
    {
        img.put.contig = put16bitbwtile;
        if (TIFFRGBAImageGet(&img, (uint32*)(image->editData()), img.width, img.height) == 0)
        {
            TIFFRGBAImageEnd(&img);
            TIFFClose(in);
            return false;
        }
    }
    else
    {
        UInt32 numPixels = img.width * img.height;
        uint32 *buffer = new uint32[numPixels];
        if (TIFFRGBAImageGet(&img, buffer, img.width, img.height) == 0)
        {
            delete [] buffer;
            TIFFRGBAImageEnd(&img);
            TIFFClose(in);
            return false;
        }

        UChar8 *dst = image->editData();
        uint32 *src = buffer;
        switch (img.samplesperpixel)
        {
        case 4:
            for (UInt32 i = numPixels; i > 0; --i)
            {
                *dst++ = TIFFGetR(*src);
                *dst++ = TIFFGetG(*src);
                *dst++ = TIFFGetB(*src);
                *dst++ = TIFFGetA(*src++);
            }
            break;
        case 3:
            for (UInt32 i = numPixels; i > 0; --i)
            {
                *dst++ = TIFFGetR(*src);
                *dst++ = TIFFGetG(*src);
                *dst++ = TIFFGetB(*src++);
            }
            break;
        case 2:
            for (UInt32 i = numPixels; i > 0; --i)
            {
                *dst++ = TIFFGetG(*src);
                *dst++ = TIFFGetA(*src++);
            }
            break;
        case 1:
            for (UInt32 i = numPixels; i > 0; --i)
                *dst++ = TIFFGetG(*src++);
            break;
        }
        delete [] buffer;
    }

    TIFFRGBAImageEnd(&img);
    TIFFClose(in);

    return true;

#else

    SWARNING <<
        getMimeType() <<
        " read is not compiled into the current binary " <<
        std::endl;
    return false;

#endif // OSG_WITH_TIF
}

//-------------------------------------------------------------------------
/*!
Tries to write the image object to the given output stream.
Returns true on success.
*/
bool TIFImageFileType::write(const ImagePtr &OSG_TIF_ARG(image), std::ostream &OSG_TIF_ARG(os),
                             const std::string &OSG_TIF_ARG(mimetype))
{
    bool                retCode = false;

#ifdef OSG_WITH_TIF
    
    if(image->getDimension() < 1 || image->getDimension() > 2)
    {
        FWARNING(("TIFImageFileType::write: invalid dimension %d!\n",
            image->getDimension()));
        return false;
    }

    TIFF         *out = TIFFClientOpen("dummy", "wm", 
                                       reinterpret_cast<thandle_t>(&os),
                                       osReadProc, osWriteProc, osSeekProc, closeProc,
			                           osSizeProc, mapFileProc, unmapFileProc);
    int           lineSize = image->getWidth() * image->getBpp();
    int           photometric = 0, samplesPerPixel = 0;
    const UChar8 *data;
    int           row;

    // TODO: implement all cases correct
    switch(image->getBpp())
    {
    case 1:
        samplesPerPixel = 1;
        photometric = PHOTOMETRIC_MINISBLACK;
        break;
    case 2:
        samplesPerPixel = 2;
        photometric = PHOTOMETRIC_MINISBLACK;
        break;
    case 3:
        samplesPerPixel = 3;
        photometric = PHOTOMETRIC_RGB;
        break;
    case 4:
        samplesPerPixel = 4;
        photometric = PHOTOMETRIC_RGB;
        break;
    case 12: // RGB 32bit float
        samplesPerPixel = 3;
        photometric = PHOTOMETRIC_RGB;
        break;
    case 16: // RGBA 32bit float
        samplesPerPixel = 4;
        photometric = PHOTOMETRIC_RGB;
        break;
    }

    int bps = 8;
    int fmt = SAMPLEFORMAT_UINT;
    switch(image->getDataType())
    {
        case Image::OSG_UINT8_IMAGEDATA:
            bps = 8;
            fmt = SAMPLEFORMAT_UINT;
        break;
        case Image::OSG_FLOAT32_IMAGEDATA:
            bps = 32;
            fmt = SAMPLEFORMAT_IEEEFP;
        break;
        default:
            FWARNING(("TIFImageFileType::write: image data type not supported!\n"));
            return false;
        break;
    }
    
    if(out)
    {
        TIFFSetField(out, TIFFTAG_IMAGEWIDTH, image->getWidth());
        TIFFSetField(out, TIFFTAG_IMAGELENGTH, image->getHeight());
        TIFFSetField(out, TIFFTAG_XRESOLUTION, image->getResX());
        TIFFSetField(out, TIFFTAG_YRESOLUTION, image->getResY());
        TIFFSetField(out, TIFFTAG_RESOLUTIONUNIT, image->getResUnit());
        TIFFSetField(out, TIFFTAG_ORIENTATION, ORIENTATION_TOPLEFT);
        TIFFSetField(out, TIFFTAG_SAMPLESPERPIXEL, samplesPerPixel);
        TIFFSetField(out, TIFFTAG_BITSPERSAMPLE, bps);
        TIFFSetField(out, TIFFTAG_SAMPLEFORMAT, fmt);
        TIFFSetField(out, TIFFTAG_PLANARCONFIG, PLANARCONFIG_CONTIG);
        TIFFSetField(out, TIFFTAG_PHOTOMETRIC, photometric);

        if(_options.find("compressionType=LZW") != std::string::npos)
            TIFFSetField(out, TIFFTAG_COMPRESSION, COMPRESSION_LZW);
        else
            TIFFSetField(out, TIFFTAG_COMPRESSION, COMPRESSION_NONE);

        TIFFSetField(out, TIFFTAG_ROWSPERSTRIP, TIFFDefaultStripSize(out, 0));

        for(row = 0; row < image->getHeight(); row++)
        {
            data = image->getData() + ((image->getHeight() - row - 1) * lineSize);
            if(TIFFWriteScanline(out, 
                                 static_cast<tdata_t>(
                                     const_cast<UChar8 *>(data)), 
                                 row, 
                                 0) < 0)
                break;
        }

        TIFFClose(out);
        retCode = true;
    }

#else
    SWARNING <<
        getMimeType() <<
        " write is not compiled into the current binary " <<
        std::endl;
#endif
    return retCode;
}

//-------------------------------------------------------------------------
/*!
Tries to determine the mime type of the data provided by an input stream
by searching for magic bytes. Returns the mime type or an empty string
when the function could not determine the mime type.
*/
std::string TIFImageFileType::determineMimetypeFromStream(std::istream &is)
{
    char filecode[4];
    is.read(filecode, 4);
    is.seekg(-4, std::ios::cur);
    if (strncmp(filecode, "MM\x00\x2a", 4) == 0)
        return std::string(getMimeType());
    if (strncmp(filecode, "II\x2a\x00", 4) == 0)
        return std::string(getMimeType());
    return std::string();
}

//-------------------------------------------------------------------------

bool TIFImageFileType::validateHeader( const Char8 *fileName, bool &implemented)
{
    implemented = true;

    if(fileName == NULL)
        return false;

    FILE *file = fopen(fileName, "rb");
    if(file == NULL)
        return false;

    std::string magic;
    magic.resize(2);
    fread(static_cast<void *>(&magic[0]), 2, 1, file);
    fclose(file);

    if(magic == "MM" || magic == "II")
    {
        return true;
    }

    return false;
}

//-------------------------------------------------------------------------
/*!
Constructor used for the singleton object
*/
TIFImageFileType::TIFImageFileType(const Char8 *mimeType,
                                   const Char8 *suffixArray[],
                                   UInt16 suffixByteCount,
                                   UInt32 flags) :
    ImageFileType(mimeType, suffixArray, suffixByteCount, flags)
{
#ifdef OSG_WITH_TIF
    TIFFSetWarningHandler(&warningHandler);
    TIFFSetErrorHandler(&errorHandler);
#endif
}

//-------------------------------------------------------------------------
/*!
Destructor
*/
TIFImageFileType::~TIFImageFileType(void) {}
