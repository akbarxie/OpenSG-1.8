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
 **     class DisplayFilter!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEDISPLAYFILTERINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGDisplayFilterBase.h"
#include "OSGDisplayFilter.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  DisplayFilterBase::EnabledFieldMask = 
    (TypeTraits<BitVector>::One << DisplayFilterBase::EnabledFieldId);

const OSG::BitVector DisplayFilterBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var bool            DisplayFilterBase::_sfEnabled
    
*/

//! DisplayFilter description

FieldDescription *DisplayFilterBase::_desc[] = 
{
    new FieldDescription(SFBool::getClassType(), 
                     "enabled", 
                     EnabledFieldId, EnabledFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&DisplayFilterBase::editSFEnabled))
};


FieldContainerType DisplayFilterBase::_type(
    "DisplayFilter",
    "AttachmentContainer",
    NULL,
    NULL, 
    DisplayFilter::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(DisplayFilterBase, DisplayFilterPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &DisplayFilterBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &DisplayFilterBase::getType(void) const 
{
    return _type;
} 


UInt32 DisplayFilterBase::getContainerSize(void) const 
{ 
    return sizeof(DisplayFilter); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void DisplayFilterBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<DisplayFilterBase *>(&other),
                          whichField);
}
#else
void DisplayFilterBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((DisplayFilterBase *) &other, whichField, sInfo);
}
void DisplayFilterBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void DisplayFilterBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

DisplayFilterBase::DisplayFilterBase(void) :
    _sfEnabled                (bool(true)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

DisplayFilterBase::DisplayFilterBase(const DisplayFilterBase &source) :
    _sfEnabled                (source._sfEnabled                ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

DisplayFilterBase::~DisplayFilterBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 DisplayFilterBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (EnabledFieldMask & whichField))
    {
        returnValue += _sfEnabled.getBinSize();
    }


    return returnValue;
}

void DisplayFilterBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (EnabledFieldMask & whichField))
    {
        _sfEnabled.copyToBin(pMem);
    }


}

void DisplayFilterBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (EnabledFieldMask & whichField))
    {
        _sfEnabled.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void DisplayFilterBase::executeSyncImpl(      DisplayFilterBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (EnabledFieldMask & whichField))
        _sfEnabled.syncWith(pOther->_sfEnabled);


}
#else
void DisplayFilterBase::executeSyncImpl(      DisplayFilterBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (EnabledFieldMask & whichField))
        _sfEnabled.syncWith(pOther->_sfEnabled);



}

void DisplayFilterBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<DisplayFilterPtr>::_type("DisplayFilterPtr", "AttachmentContainerPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(DisplayFilterPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(DisplayFilterPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGDISPLAYFILTERBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGDISPLAYFILTERBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGDISPLAYFILTERFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE
