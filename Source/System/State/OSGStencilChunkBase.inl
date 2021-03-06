/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
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
 **     class StencilChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &StencilChunkBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 StencilChunkBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
StencilChunkPtr StencilChunkBase::create(void) 
{
    StencilChunkPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = StencilChunkPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
StencilChunkPtr StencilChunkBase::createEmpty(void) 
{ 
    StencilChunkPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the StencilChunk::_sfStencilFunc field.
inline
const SFGLenum *StencilChunkBase::getSFStencilFunc(void) const
{
    return &_sfStencilFunc;
}

//! Get the StencilChunk::_sfStencilFunc field.
inline
SFGLenum *StencilChunkBase::editSFStencilFunc(void)
{
    return &_sfStencilFunc;
}

#ifndef OSG_2_PREP
//! Get the StencilChunk::_sfStencilFunc field.
inline
SFGLenum *StencilChunkBase::getSFStencilFunc(void)
{
    return &_sfStencilFunc;
}
#endif

//! Get the StencilChunk::_sfStencilValue field.
inline
const SFInt32 *StencilChunkBase::getSFStencilValue(void) const
{
    return &_sfStencilValue;
}

//! Get the StencilChunk::_sfStencilValue field.
inline
SFInt32 *StencilChunkBase::editSFStencilValue(void)
{
    return &_sfStencilValue;
}

#ifndef OSG_2_PREP
//! Get the StencilChunk::_sfStencilValue field.
inline
SFInt32 *StencilChunkBase::getSFStencilValue(void)
{
    return &_sfStencilValue;
}
#endif

//! Get the StencilChunk::_sfStencilMask field.
inline
const SFUInt32 *StencilChunkBase::getSFStencilMask(void) const
{
    return &_sfStencilMask;
}

//! Get the StencilChunk::_sfStencilMask field.
inline
SFUInt32 *StencilChunkBase::editSFStencilMask(void)
{
    return &_sfStencilMask;
}

#ifndef OSG_2_PREP
//! Get the StencilChunk::_sfStencilMask field.
inline
SFUInt32 *StencilChunkBase::getSFStencilMask(void)
{
    return &_sfStencilMask;
}
#endif

//! Get the StencilChunk::_sfStencilOpFail field.
inline
const SFGLenum *StencilChunkBase::getSFStencilOpFail(void) const
{
    return &_sfStencilOpFail;
}

//! Get the StencilChunk::_sfStencilOpFail field.
inline
SFGLenum *StencilChunkBase::editSFStencilOpFail(void)
{
    return &_sfStencilOpFail;
}

#ifndef OSG_2_PREP
//! Get the StencilChunk::_sfStencilOpFail field.
inline
SFGLenum *StencilChunkBase::getSFStencilOpFail(void)
{
    return &_sfStencilOpFail;
}
#endif

//! Get the StencilChunk::_sfStencilOpZFail field.
inline
const SFGLenum *StencilChunkBase::getSFStencilOpZFail(void) const
{
    return &_sfStencilOpZFail;
}

//! Get the StencilChunk::_sfStencilOpZFail field.
inline
SFGLenum *StencilChunkBase::editSFStencilOpZFail(void)
{
    return &_sfStencilOpZFail;
}

#ifndef OSG_2_PREP
//! Get the StencilChunk::_sfStencilOpZFail field.
inline
SFGLenum *StencilChunkBase::getSFStencilOpZFail(void)
{
    return &_sfStencilOpZFail;
}
#endif

//! Get the StencilChunk::_sfStencilOpZPass field.
inline
const SFGLenum *StencilChunkBase::getSFStencilOpZPass(void) const
{
    return &_sfStencilOpZPass;
}

//! Get the StencilChunk::_sfStencilOpZPass field.
inline
SFGLenum *StencilChunkBase::editSFStencilOpZPass(void)
{
    return &_sfStencilOpZPass;
}

#ifndef OSG_2_PREP
//! Get the StencilChunk::_sfStencilOpZPass field.
inline
SFGLenum *StencilChunkBase::getSFStencilOpZPass(void)
{
    return &_sfStencilOpZPass;
}
#endif

//! Get the StencilChunk::_sfClearBuffer field.
inline
const SFInt32 *StencilChunkBase::getSFClearBuffer(void) const
{
    return &_sfClearBuffer;
}

//! Get the StencilChunk::_sfClearBuffer field.
inline
SFInt32 *StencilChunkBase::editSFClearBuffer(void)
{
    return &_sfClearBuffer;
}

#ifndef OSG_2_PREP
//! Get the StencilChunk::_sfClearBuffer field.
inline
SFInt32 *StencilChunkBase::getSFClearBuffer(void)
{
    return &_sfClearBuffer;
}
#endif

//! Get the StencilChunk::_sfBitMask field.
inline
const SFUInt32 *StencilChunkBase::getSFBitMask(void) const
{
    return &_sfBitMask;
}

//! Get the StencilChunk::_sfBitMask field.
inline
SFUInt32 *StencilChunkBase::editSFBitMask(void)
{
    return &_sfBitMask;
}

#ifndef OSG_2_PREP
//! Get the StencilChunk::_sfBitMask field.
inline
SFUInt32 *StencilChunkBase::getSFBitMask(void)
{
    return &_sfBitMask;
}
#endif


//! Get the value of the StencilChunk::_sfStencilFunc field.
inline
GLenum &StencilChunkBase::editStencilFunc(void)
{
    return _sfStencilFunc.getValue();
}

//! Get the value of the StencilChunk::_sfStencilFunc field.
inline
const GLenum &StencilChunkBase::getStencilFunc(void) const
{
    return _sfStencilFunc.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the StencilChunk::_sfStencilFunc field.
inline
GLenum &StencilChunkBase::getStencilFunc(void)
{
    return _sfStencilFunc.getValue();
}
#endif

//! Set the value of the StencilChunk::_sfStencilFunc field.
inline
void StencilChunkBase::setStencilFunc(const GLenum &value)
{
    _sfStencilFunc.setValue(value);
}

//! Get the value of the StencilChunk::_sfStencilValue field.
inline
Int32 &StencilChunkBase::editStencilValue(void)
{
    return _sfStencilValue.getValue();
}

//! Get the value of the StencilChunk::_sfStencilValue field.
inline
const Int32 &StencilChunkBase::getStencilValue(void) const
{
    return _sfStencilValue.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the StencilChunk::_sfStencilValue field.
inline
Int32 &StencilChunkBase::getStencilValue(void)
{
    return _sfStencilValue.getValue();
}
#endif

//! Set the value of the StencilChunk::_sfStencilValue field.
inline
void StencilChunkBase::setStencilValue(const Int32 &value)
{
    _sfStencilValue.setValue(value);
}

//! Get the value of the StencilChunk::_sfStencilMask field.
inline
UInt32 &StencilChunkBase::editStencilMask(void)
{
    return _sfStencilMask.getValue();
}

//! Get the value of the StencilChunk::_sfStencilMask field.
inline
const UInt32 &StencilChunkBase::getStencilMask(void) const
{
    return _sfStencilMask.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the StencilChunk::_sfStencilMask field.
inline
UInt32 &StencilChunkBase::getStencilMask(void)
{
    return _sfStencilMask.getValue();
}
#endif

//! Set the value of the StencilChunk::_sfStencilMask field.
inline
void StencilChunkBase::setStencilMask(const UInt32 &value)
{
    _sfStencilMask.setValue(value);
}

//! Get the value of the StencilChunk::_sfStencilOpFail field.
inline
GLenum &StencilChunkBase::editStencilOpFail(void)
{
    return _sfStencilOpFail.getValue();
}

//! Get the value of the StencilChunk::_sfStencilOpFail field.
inline
const GLenum &StencilChunkBase::getStencilOpFail(void) const
{
    return _sfStencilOpFail.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the StencilChunk::_sfStencilOpFail field.
inline
GLenum &StencilChunkBase::getStencilOpFail(void)
{
    return _sfStencilOpFail.getValue();
}
#endif

//! Set the value of the StencilChunk::_sfStencilOpFail field.
inline
void StencilChunkBase::setStencilOpFail(const GLenum &value)
{
    _sfStencilOpFail.setValue(value);
}

//! Get the value of the StencilChunk::_sfStencilOpZFail field.
inline
GLenum &StencilChunkBase::editStencilOpZFail(void)
{
    return _sfStencilOpZFail.getValue();
}

//! Get the value of the StencilChunk::_sfStencilOpZFail field.
inline
const GLenum &StencilChunkBase::getStencilOpZFail(void) const
{
    return _sfStencilOpZFail.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the StencilChunk::_sfStencilOpZFail field.
inline
GLenum &StencilChunkBase::getStencilOpZFail(void)
{
    return _sfStencilOpZFail.getValue();
}
#endif

//! Set the value of the StencilChunk::_sfStencilOpZFail field.
inline
void StencilChunkBase::setStencilOpZFail(const GLenum &value)
{
    _sfStencilOpZFail.setValue(value);
}

//! Get the value of the StencilChunk::_sfStencilOpZPass field.
inline
GLenum &StencilChunkBase::editStencilOpZPass(void)
{
    return _sfStencilOpZPass.getValue();
}

//! Get the value of the StencilChunk::_sfStencilOpZPass field.
inline
const GLenum &StencilChunkBase::getStencilOpZPass(void) const
{
    return _sfStencilOpZPass.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the StencilChunk::_sfStencilOpZPass field.
inline
GLenum &StencilChunkBase::getStencilOpZPass(void)
{
    return _sfStencilOpZPass.getValue();
}
#endif

//! Set the value of the StencilChunk::_sfStencilOpZPass field.
inline
void StencilChunkBase::setStencilOpZPass(const GLenum &value)
{
    _sfStencilOpZPass.setValue(value);
}

//! Get the value of the StencilChunk::_sfClearBuffer field.
inline
Int32 &StencilChunkBase::editClearBuffer(void)
{
    return _sfClearBuffer.getValue();
}

//! Get the value of the StencilChunk::_sfClearBuffer field.
inline
const Int32 &StencilChunkBase::getClearBuffer(void) const
{
    return _sfClearBuffer.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the StencilChunk::_sfClearBuffer field.
inline
Int32 &StencilChunkBase::getClearBuffer(void)
{
    return _sfClearBuffer.getValue();
}
#endif

//! Set the value of the StencilChunk::_sfClearBuffer field.
inline
void StencilChunkBase::setClearBuffer(const Int32 &value)
{
    _sfClearBuffer.setValue(value);
}

//! Get the value of the StencilChunk::_sfBitMask field.
inline
UInt32 &StencilChunkBase::editBitMask(void)
{
    return _sfBitMask.getValue();
}

//! Get the value of the StencilChunk::_sfBitMask field.
inline
const UInt32 &StencilChunkBase::getBitMask(void) const
{
    return _sfBitMask.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the StencilChunk::_sfBitMask field.
inline
UInt32 &StencilChunkBase::getBitMask(void)
{
    return _sfBitMask.getValue();
}
#endif

//! Set the value of the StencilChunk::_sfBitMask field.
inline
void StencilChunkBase::setBitMask(const UInt32 &value)
{
    _sfBitMask.setValue(value);
}


OSG_END_NAMESPACE

#define OSGSTENCILCHUNKBASE_INLINE_CVSID "@(#)$Id: OSGStencilChunkBase.inl,v 1.9 2008/06/09 12:28:21 vossg Exp $"

