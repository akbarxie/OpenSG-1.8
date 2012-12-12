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
 **     class DVRIsoSurface!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &DVRIsoSurfaceBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 DVRIsoSurfaceBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
DVRIsoSurfacePtr DVRIsoSurfaceBase::create(void) 
{
    DVRIsoSurfacePtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = DVRIsoSurfacePtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
DVRIsoSurfacePtr DVRIsoSurfaceBase::createEmpty(void) 
{ 
    DVRIsoSurfacePtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the DVRIsoSurface::_sfIsoValue field.
inline
const SFReal32 *DVRIsoSurfaceBase::getSFIsoValue(void) const
{
    return &_sfIsoValue;
}

//! Get the DVRIsoSurface::_sfIsoValue field.
inline
SFReal32 *DVRIsoSurfaceBase::editSFIsoValue(void)
{
    return &_sfIsoValue;
}

#ifndef OSG_2_PREP
//! Get the DVRIsoSurface::_sfIsoValue field.
inline
SFReal32 *DVRIsoSurfaceBase::getSFIsoValue(void)
{
    return &_sfIsoValue;
}
#endif

//! Get the DVRIsoSurface::_sfIsoThickness field.
inline
const SFReal32 *DVRIsoSurfaceBase::getSFIsoThickness(void) const
{
    return &_sfIsoThickness;
}

//! Get the DVRIsoSurface::_sfIsoThickness field.
inline
SFReal32 *DVRIsoSurfaceBase::editSFIsoThickness(void)
{
    return &_sfIsoThickness;
}

#ifndef OSG_2_PREP
//! Get the DVRIsoSurface::_sfIsoThickness field.
inline
SFReal32 *DVRIsoSurfaceBase::getSFIsoThickness(void)
{
    return &_sfIsoThickness;
}
#endif

//! Get the DVRIsoSurface::_sfIsoOpacity field.
inline
const SFReal32 *DVRIsoSurfaceBase::getSFIsoOpacity(void) const
{
    return &_sfIsoOpacity;
}

//! Get the DVRIsoSurface::_sfIsoOpacity field.
inline
SFReal32 *DVRIsoSurfaceBase::editSFIsoOpacity(void)
{
    return &_sfIsoOpacity;
}

#ifndef OSG_2_PREP
//! Get the DVRIsoSurface::_sfIsoOpacity field.
inline
SFReal32 *DVRIsoSurfaceBase::getSFIsoOpacity(void)
{
    return &_sfIsoOpacity;
}
#endif

//! Get the DVRIsoSurface::_sfAlphaMode field.
inline
const SFUInt32 *DVRIsoSurfaceBase::getSFAlphaMode(void) const
{
    return &_sfAlphaMode;
}

//! Get the DVRIsoSurface::_sfAlphaMode field.
inline
SFUInt32 *DVRIsoSurfaceBase::editSFAlphaMode(void)
{
    return &_sfAlphaMode;
}

#ifndef OSG_2_PREP
//! Get the DVRIsoSurface::_sfAlphaMode field.
inline
SFUInt32 *DVRIsoSurfaceBase::getSFAlphaMode(void)
{
    return &_sfAlphaMode;
}
#endif

//! Get the DVRIsoSurface::_sfSpecularLighting field.
inline
const SFBool *DVRIsoSurfaceBase::getSFSpecularLighting(void) const
{
    return &_sfSpecularLighting;
}

//! Get the DVRIsoSurface::_sfSpecularLighting field.
inline
SFBool *DVRIsoSurfaceBase::editSFSpecularLighting(void)
{
    return &_sfSpecularLighting;
}

#ifndef OSG_2_PREP
//! Get the DVRIsoSurface::_sfSpecularLighting field.
inline
SFBool *DVRIsoSurfaceBase::getSFSpecularLighting(void)
{
    return &_sfSpecularLighting;
}
#endif


//! Get the value of the DVRIsoSurface::_sfIsoValue field.
inline
Real32 &DVRIsoSurfaceBase::editIsoValue(void)
{
    return _sfIsoValue.getValue();
}

//! Get the value of the DVRIsoSurface::_sfIsoValue field.
inline
const Real32 &DVRIsoSurfaceBase::getIsoValue(void) const
{
    return _sfIsoValue.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the DVRIsoSurface::_sfIsoValue field.
inline
Real32 &DVRIsoSurfaceBase::getIsoValue(void)
{
    return _sfIsoValue.getValue();
}
#endif

//! Set the value of the DVRIsoSurface::_sfIsoValue field.
inline
void DVRIsoSurfaceBase::setIsoValue(const Real32 &value)
{
    _sfIsoValue.setValue(value);
}

//! Get the value of the DVRIsoSurface::_sfIsoThickness field.
inline
Real32 &DVRIsoSurfaceBase::editIsoThickness(void)
{
    return _sfIsoThickness.getValue();
}

//! Get the value of the DVRIsoSurface::_sfIsoThickness field.
inline
const Real32 &DVRIsoSurfaceBase::getIsoThickness(void) const
{
    return _sfIsoThickness.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the DVRIsoSurface::_sfIsoThickness field.
inline
Real32 &DVRIsoSurfaceBase::getIsoThickness(void)
{
    return _sfIsoThickness.getValue();
}
#endif

//! Set the value of the DVRIsoSurface::_sfIsoThickness field.
inline
void DVRIsoSurfaceBase::setIsoThickness(const Real32 &value)
{
    _sfIsoThickness.setValue(value);
}

//! Get the value of the DVRIsoSurface::_sfIsoOpacity field.
inline
Real32 &DVRIsoSurfaceBase::editIsoOpacity(void)
{
    return _sfIsoOpacity.getValue();
}

//! Get the value of the DVRIsoSurface::_sfIsoOpacity field.
inline
const Real32 &DVRIsoSurfaceBase::getIsoOpacity(void) const
{
    return _sfIsoOpacity.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the DVRIsoSurface::_sfIsoOpacity field.
inline
Real32 &DVRIsoSurfaceBase::getIsoOpacity(void)
{
    return _sfIsoOpacity.getValue();
}
#endif

//! Set the value of the DVRIsoSurface::_sfIsoOpacity field.
inline
void DVRIsoSurfaceBase::setIsoOpacity(const Real32 &value)
{
    _sfIsoOpacity.setValue(value);
}

//! Get the value of the DVRIsoSurface::_sfAlphaMode field.
inline
UInt32 &DVRIsoSurfaceBase::editAlphaMode(void)
{
    return _sfAlphaMode.getValue();
}

//! Get the value of the DVRIsoSurface::_sfAlphaMode field.
inline
const UInt32 &DVRIsoSurfaceBase::getAlphaMode(void) const
{
    return _sfAlphaMode.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the DVRIsoSurface::_sfAlphaMode field.
inline
UInt32 &DVRIsoSurfaceBase::getAlphaMode(void)
{
    return _sfAlphaMode.getValue();
}
#endif

//! Set the value of the DVRIsoSurface::_sfAlphaMode field.
inline
void DVRIsoSurfaceBase::setAlphaMode(const UInt32 &value)
{
    _sfAlphaMode.setValue(value);
}

//! Get the value of the DVRIsoSurface::_sfSpecularLighting field.
inline
bool &DVRIsoSurfaceBase::editSpecularLighting(void)
{
    return _sfSpecularLighting.getValue();
}

//! Get the value of the DVRIsoSurface::_sfSpecularLighting field.
inline
const bool &DVRIsoSurfaceBase::getSpecularLighting(void) const
{
    return _sfSpecularLighting.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the DVRIsoSurface::_sfSpecularLighting field.
inline
bool &DVRIsoSurfaceBase::getSpecularLighting(void)
{
    return _sfSpecularLighting.getValue();
}
#endif

//! Set the value of the DVRIsoSurface::_sfSpecularLighting field.
inline
void DVRIsoSurfaceBase::setSpecularLighting(const bool &value)
{
    _sfSpecularLighting.setValue(value);
}


OSG_END_NAMESPACE

#define OSGDVRISOSURFACEBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.21 2008/06/09 07:30:44 vossg Exp $"
