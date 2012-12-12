/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
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

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class WIN32Window!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEWIN32WINDOWINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGWIN32WindowBase.h"
#include "OSGWIN32Window.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  WIN32WindowBase::HwndFieldMask = 
    (TypeTraits<BitVector>::One << WIN32WindowBase::HwndFieldId);

const OSG::BitVector  WIN32WindowBase::HdcFieldMask = 
    (TypeTraits<BitVector>::One << WIN32WindowBase::HdcFieldId);

const OSG::BitVector  WIN32WindowBase::HglrcFieldMask = 
    (TypeTraits<BitVector>::One << WIN32WindowBase::HglrcFieldId);

const OSG::BitVector WIN32WindowBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var HWND            WIN32WindowBase::_sfHwnd
    
*/
/*! \var HDC             WIN32WindowBase::_sfHdc
    
*/
/*! \var HGLRC           WIN32WindowBase::_sfHglrc
    
*/

//! WIN32Window description

FieldDescription *WIN32WindowBase::_desc[] = 
{
    new FieldDescription(SFHWND::getClassType(), 
                     "hwnd", 
                     HwndFieldId, HwndFieldMask,
                     true,
                     reinterpret_cast<FieldAccessMethod>(&WIN32WindowBase::editSFHwnd)),
    new FieldDescription(SFHDC::getClassType(), 
                     "hdc", 
                     HdcFieldId, HdcFieldMask,
                     true,
                     reinterpret_cast<FieldAccessMethod>(&WIN32WindowBase::editSFHdc)),
    new FieldDescription(SFHGLRC::getClassType(), 
                     "hglrc", 
                     HglrcFieldId, HglrcFieldMask,
                     true,
                     reinterpret_cast<FieldAccessMethod>(&WIN32WindowBase::editSFHglrc))
};


FieldContainerType WIN32WindowBase::_type(
    "WIN32Window",
    "Window",
    NULL,
    reinterpret_cast<PrototypeCreateF>(&WIN32WindowBase::createEmpty),
    WIN32Window::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(WIN32WindowBase, WIN32WindowPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &WIN32WindowBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &WIN32WindowBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr WIN32WindowBase::shallowCopy(void) const 
{ 
    WIN32WindowPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const WIN32Window *>(this)); 

    return returnValue; 
}

UInt32 WIN32WindowBase::getContainerSize(void) const 
{ 
    return sizeof(WIN32Window); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void WIN32WindowBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<WIN32WindowBase *>(&other),
                          whichField);
}
#else
void WIN32WindowBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((WIN32WindowBase *) &other, whichField, sInfo);
}
void WIN32WindowBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void WIN32WindowBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

WIN32WindowBase::WIN32WindowBase(void) :
    _sfHwnd                   (HWND(0)), 
    _sfHdc                    (HDC(0)), 
    _sfHglrc                  (HGLRC(0)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

WIN32WindowBase::WIN32WindowBase(const WIN32WindowBase &source) :
    _sfHwnd                   (source._sfHwnd                   ), 
    _sfHdc                    (source._sfHdc                    ), 
    _sfHglrc                  (source._sfHglrc                  ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

WIN32WindowBase::~WIN32WindowBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 WIN32WindowBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (HwndFieldMask & whichField))
    {
        returnValue += _sfHwnd.getBinSize();
    }

    if(FieldBits::NoField != (HdcFieldMask & whichField))
    {
        returnValue += _sfHdc.getBinSize();
    }

    if(FieldBits::NoField != (HglrcFieldMask & whichField))
    {
        returnValue += _sfHglrc.getBinSize();
    }


    return returnValue;
}

void WIN32WindowBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (HwndFieldMask & whichField))
    {
        _sfHwnd.copyToBin(pMem);
    }

    if(FieldBits::NoField != (HdcFieldMask & whichField))
    {
        _sfHdc.copyToBin(pMem);
    }

    if(FieldBits::NoField != (HglrcFieldMask & whichField))
    {
        _sfHglrc.copyToBin(pMem);
    }


}

void WIN32WindowBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (HwndFieldMask & whichField))
    {
        _sfHwnd.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (HdcFieldMask & whichField))
    {
        _sfHdc.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (HglrcFieldMask & whichField))
    {
        _sfHglrc.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void WIN32WindowBase::executeSyncImpl(      WIN32WindowBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (HwndFieldMask & whichField))
        _sfHwnd.syncWith(pOther->_sfHwnd);

    if(FieldBits::NoField != (HdcFieldMask & whichField))
        _sfHdc.syncWith(pOther->_sfHdc);

    if(FieldBits::NoField != (HglrcFieldMask & whichField))
        _sfHglrc.syncWith(pOther->_sfHglrc);


}
#else
void WIN32WindowBase::executeSyncImpl(      WIN32WindowBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (HwndFieldMask & whichField))
        _sfHwnd.syncWith(pOther->_sfHwnd);

    if(FieldBits::NoField != (HdcFieldMask & whichField))
        _sfHdc.syncWith(pOther->_sfHdc);

    if(FieldBits::NoField != (HglrcFieldMask & whichField))
        _sfHglrc.syncWith(pOther->_sfHglrc);



}

void WIN32WindowBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OSGSFieldTypeDef.inl>
#include <OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<WIN32WindowPtr>::_type("WIN32WindowPtr", "WindowPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(WIN32WindowPtr, OSG_WINDOWWIN32LIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(WIN32WindowPtr, OSG_WINDOWWIN32LIB_DLLTMPLMAPPING);


/*------------------------------------------------------------------------*/
/*                              cvs id's                                  */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

namespace
{
    static Char8 cvsid_cpp       [] = "@(#)$Id: FCBaseTemplate_cpp.h,v 1.49 2008/06/09 07:30:44 vossg Exp $";
    static Char8 cvsid_hpp       [] = OSGWIN32WINDOWBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGWIN32WINDOWBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGWIN32WINDOWFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE
