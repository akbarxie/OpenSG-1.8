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
 **     class ClusterWindow!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ClusterWindowBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 ClusterWindowBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
ClusterWindowPtr ClusterWindowBase::create(void) 
{
    ClusterWindowPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = ClusterWindowPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
ClusterWindowPtr ClusterWindowBase::createEmpty(void) 
{ 
    ClusterWindowPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the ClusterWindow::_mfServers field.
inline
const MFString *ClusterWindowBase::getMFServers(void) const
{
    return &_mfServers;
}

//! Get the ClusterWindow::_mfServers field.
inline
MFString *ClusterWindowBase::editMFServers(void)
{
    return &_mfServers;
}

#ifndef OSG_2_PREP
//! Get the ClusterWindow::_mfServers field.
inline
MFString *ClusterWindowBase::getMFServers(void)
{
    return &_mfServers;
}
#endif

//! Get the ClusterWindow::_sfConnectionType field.
inline
const SFString *ClusterWindowBase::getSFConnectionType(void) const
{
    return &_sfConnectionType;
}

//! Get the ClusterWindow::_sfConnectionType field.
inline
SFString *ClusterWindowBase::editSFConnectionType(void)
{
    return &_sfConnectionType;
}

#ifndef OSG_2_PREP
//! Get the ClusterWindow::_sfConnectionType field.
inline
SFString *ClusterWindowBase::getSFConnectionType(void)
{
    return &_sfConnectionType;
}
#endif

//! Get the ClusterWindow::_sfConnectionInterface field.
inline
const SFString *ClusterWindowBase::getSFConnectionInterface(void) const
{
    return &_sfConnectionInterface;
}

//! Get the ClusterWindow::_sfConnectionInterface field.
inline
SFString *ClusterWindowBase::editSFConnectionInterface(void)
{
    return &_sfConnectionInterface;
}

#ifndef OSG_2_PREP
//! Get the ClusterWindow::_sfConnectionInterface field.
inline
SFString *ClusterWindowBase::getSFConnectionInterface(void)
{
    return &_sfConnectionInterface;
}
#endif

//! Get the ClusterWindow::_sfConnectionDestination field.
inline
const SFString *ClusterWindowBase::getSFConnectionDestination(void) const
{
    return &_sfConnectionDestination;
}

//! Get the ClusterWindow::_sfConnectionDestination field.
inline
SFString *ClusterWindowBase::editSFConnectionDestination(void)
{
    return &_sfConnectionDestination;
}

#ifndef OSG_2_PREP
//! Get the ClusterWindow::_sfConnectionDestination field.
inline
SFString *ClusterWindowBase::getSFConnectionDestination(void)
{
    return &_sfConnectionDestination;
}
#endif

//! Get the ClusterWindow::_sfConnectionParams field.
inline
const SFString *ClusterWindowBase::getSFConnectionParams(void) const
{
    return &_sfConnectionParams;
}

//! Get the ClusterWindow::_sfConnectionParams field.
inline
SFString *ClusterWindowBase::editSFConnectionParams(void)
{
    return &_sfConnectionParams;
}

#ifndef OSG_2_PREP
//! Get the ClusterWindow::_sfConnectionParams field.
inline
SFString *ClusterWindowBase::getSFConnectionParams(void)
{
    return &_sfConnectionParams;
}
#endif

//! Get the ClusterWindow::_sfServicePort field.
inline
const SFUInt32 *ClusterWindowBase::getSFServicePort(void) const
{
    return &_sfServicePort;
}

//! Get the ClusterWindow::_sfServicePort field.
inline
SFUInt32 *ClusterWindowBase::editSFServicePort(void)
{
    return &_sfServicePort;
}

#ifndef OSG_2_PREP
//! Get the ClusterWindow::_sfServicePort field.
inline
SFUInt32 *ClusterWindowBase::getSFServicePort(void)
{
    return &_sfServicePort;
}
#endif

//! Get the ClusterWindow::_sfServiceAddress field.
inline
const SFString *ClusterWindowBase::getSFServiceAddress(void) const
{
    return &_sfServiceAddress;
}

//! Get the ClusterWindow::_sfServiceAddress field.
inline
SFString *ClusterWindowBase::editSFServiceAddress(void)
{
    return &_sfServiceAddress;
}

#ifndef OSG_2_PREP
//! Get the ClusterWindow::_sfServiceAddress field.
inline
SFString *ClusterWindowBase::getSFServiceAddress(void)
{
    return &_sfServiceAddress;
}
#endif

//! Get the ClusterWindow::_sfServiceInterface field.
inline
const SFString *ClusterWindowBase::getSFServiceInterface(void) const
{
    return &_sfServiceInterface;
}

//! Get the ClusterWindow::_sfServiceInterface field.
inline
SFString *ClusterWindowBase::editSFServiceInterface(void)
{
    return &_sfServiceInterface;
}

#ifndef OSG_2_PREP
//! Get the ClusterWindow::_sfServiceInterface field.
inline
SFString *ClusterWindowBase::getSFServiceInterface(void)
{
    return &_sfServiceInterface;
}
#endif

//! Get the ClusterWindow::_sfClientWindow field.
inline
const SFWindowPtr *ClusterWindowBase::getSFClientWindow(void) const
{
    return &_sfClientWindow;
}

//! Get the ClusterWindow::_sfClientWindow field.
inline
SFWindowPtr *ClusterWindowBase::editSFClientWindow(void)
{
    return &_sfClientWindow;
}

#ifndef OSG_2_PREP
//! Get the ClusterWindow::_sfClientWindow field.
inline
SFWindowPtr *ClusterWindowBase::getSFClientWindow(void)
{
    return &_sfClientWindow;
}
#endif

//! Get the ClusterWindow::_sfInterleave field.
inline
const SFUInt32 *ClusterWindowBase::getSFInterleave(void) const
{
    return &_sfInterleave;
}

//! Get the ClusterWindow::_sfInterleave field.
inline
SFUInt32 *ClusterWindowBase::editSFInterleave(void)
{
    return &_sfInterleave;
}

#ifndef OSG_2_PREP
//! Get the ClusterWindow::_sfInterleave field.
inline
SFUInt32 *ClusterWindowBase::getSFInterleave(void)
{
    return &_sfInterleave;
}
#endif

//! Get the ClusterWindow::_sfFrameCount field.
inline
const SFUInt32 *ClusterWindowBase::getSFFrameCount(void) const
{
    return &_sfFrameCount;
}

//! Get the ClusterWindow::_sfFrameCount field.
inline
SFUInt32 *ClusterWindowBase::editSFFrameCount(void)
{
    return &_sfFrameCount;
}

#ifndef OSG_2_PREP
//! Get the ClusterWindow::_sfFrameCount field.
inline
SFUInt32 *ClusterWindowBase::getSFFrameCount(void)
{
    return &_sfFrameCount;
}
#endif

//! Get the ClusterWindow::_sfComposer field.
inline
const SFImageComposerPtr *ClusterWindowBase::getSFComposer(void) const
{
    return &_sfComposer;
}

//! Get the ClusterWindow::_sfComposer field.
inline
SFImageComposerPtr *ClusterWindowBase::editSFComposer(void)
{
    return &_sfComposer;
}

#ifndef OSG_2_PREP
//! Get the ClusterWindow::_sfComposer field.
inline
SFImageComposerPtr *ClusterWindowBase::getSFComposer(void)
{
    return &_sfComposer;
}
#endif

//! Get the ClusterWindow::_mfAutostart field.
inline
const MFString *ClusterWindowBase::getMFAutostart(void) const
{
    return &_mfAutostart;
}

//! Get the ClusterWindow::_mfAutostart field.
inline
MFString *ClusterWindowBase::editMFAutostart(void)
{
    return &_mfAutostart;
}

#ifndef OSG_2_PREP
//! Get the ClusterWindow::_mfAutostart field.
inline
MFString *ClusterWindowBase::getMFAutostart(void)
{
    return &_mfAutostart;
}
#endif

//! Get the ClusterWindow::_mfCalibration field.
inline
const MFDisplayCalibrationPtr *ClusterWindowBase::getMFCalibration(void) const
{
    return &_mfCalibration;
}

//! Get the ClusterWindow::_mfCalibration field.
inline
MFDisplayCalibrationPtr *ClusterWindowBase::editMFCalibration(void)
{
    return &_mfCalibration;
}

#ifndef OSG_2_PREP
//! Get the ClusterWindow::_mfCalibration field.
inline
MFDisplayCalibrationPtr *ClusterWindowBase::getMFCalibration(void)
{
    return &_mfCalibration;
}
#endif

//! Get the ClusterWindow::_mfFilter field.
inline
const MFDisplayFilterForegroundPtr *ClusterWindowBase::getMFFilter(void) const
{
    return &_mfFilter;
}

//! Get the ClusterWindow::_mfFilter field.
inline
MFDisplayFilterForegroundPtr *ClusterWindowBase::editMFFilter(void)
{
    return &_mfFilter;
}

#ifndef OSG_2_PREP
//! Get the ClusterWindow::_mfFilter field.
inline
MFDisplayFilterForegroundPtr *ClusterWindowBase::getMFFilter(void)
{
    return &_mfFilter;
}
#endif

//! Get the ClusterWindow::_sfDirty field.
inline
const SFBool *ClusterWindowBase::getSFDirty(void) const
{
    return &_sfDirty;
}

//! Get the ClusterWindow::_sfDirty field.
inline
SFBool *ClusterWindowBase::editSFDirty(void)
{
    return &_sfDirty;
}

#ifndef OSG_2_PREP
//! Get the ClusterWindow::_sfDirty field.
inline
SFBool *ClusterWindowBase::getSFDirty(void)
{
    return &_sfDirty;
}
#endif


//! Get the value of the ClusterWindow::_sfConnectionType field.
inline
std::string &ClusterWindowBase::editConnectionType(void)
{
    return _sfConnectionType.getValue();
}

//! Get the value of the ClusterWindow::_sfConnectionType field.
inline
const std::string &ClusterWindowBase::getConnectionType(void) const
{
    return _sfConnectionType.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the ClusterWindow::_sfConnectionType field.
inline
std::string &ClusterWindowBase::getConnectionType(void)
{
    return _sfConnectionType.getValue();
}
#endif

//! Set the value of the ClusterWindow::_sfConnectionType field.
inline
void ClusterWindowBase::setConnectionType(const std::string &value)
{
    _sfConnectionType.setValue(value);
}

//! Get the value of the ClusterWindow::_sfConnectionInterface field.
inline
std::string &ClusterWindowBase::editConnectionInterface(void)
{
    return _sfConnectionInterface.getValue();
}

//! Get the value of the ClusterWindow::_sfConnectionInterface field.
inline
const std::string &ClusterWindowBase::getConnectionInterface(void) const
{
    return _sfConnectionInterface.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the ClusterWindow::_sfConnectionInterface field.
inline
std::string &ClusterWindowBase::getConnectionInterface(void)
{
    return _sfConnectionInterface.getValue();
}
#endif

//! Set the value of the ClusterWindow::_sfConnectionInterface field.
inline
void ClusterWindowBase::setConnectionInterface(const std::string &value)
{
    _sfConnectionInterface.setValue(value);
}

//! Get the value of the ClusterWindow::_sfConnectionDestination field.
inline
std::string &ClusterWindowBase::editConnectionDestination(void)
{
    return _sfConnectionDestination.getValue();
}

//! Get the value of the ClusterWindow::_sfConnectionDestination field.
inline
const std::string &ClusterWindowBase::getConnectionDestination(void) const
{
    return _sfConnectionDestination.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the ClusterWindow::_sfConnectionDestination field.
inline
std::string &ClusterWindowBase::getConnectionDestination(void)
{
    return _sfConnectionDestination.getValue();
}
#endif

//! Set the value of the ClusterWindow::_sfConnectionDestination field.
inline
void ClusterWindowBase::setConnectionDestination(const std::string &value)
{
    _sfConnectionDestination.setValue(value);
}

//! Get the value of the ClusterWindow::_sfConnectionParams field.
inline
std::string &ClusterWindowBase::editConnectionParams(void)
{
    return _sfConnectionParams.getValue();
}

//! Get the value of the ClusterWindow::_sfConnectionParams field.
inline
const std::string &ClusterWindowBase::getConnectionParams(void) const
{
    return _sfConnectionParams.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the ClusterWindow::_sfConnectionParams field.
inline
std::string &ClusterWindowBase::getConnectionParams(void)
{
    return _sfConnectionParams.getValue();
}
#endif

//! Set the value of the ClusterWindow::_sfConnectionParams field.
inline
void ClusterWindowBase::setConnectionParams(const std::string &value)
{
    _sfConnectionParams.setValue(value);
}

//! Get the value of the ClusterWindow::_sfServicePort field.
inline
UInt32 &ClusterWindowBase::editServicePort(void)
{
    return _sfServicePort.getValue();
}

//! Get the value of the ClusterWindow::_sfServicePort field.
inline
const UInt32 &ClusterWindowBase::getServicePort(void) const
{
    return _sfServicePort.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the ClusterWindow::_sfServicePort field.
inline
UInt32 &ClusterWindowBase::getServicePort(void)
{
    return _sfServicePort.getValue();
}
#endif

//! Set the value of the ClusterWindow::_sfServicePort field.
inline
void ClusterWindowBase::setServicePort(const UInt32 &value)
{
    _sfServicePort.setValue(value);
}

//! Get the value of the ClusterWindow::_sfServiceAddress field.
inline
std::string &ClusterWindowBase::editServiceAddress(void)
{
    return _sfServiceAddress.getValue();
}

//! Get the value of the ClusterWindow::_sfServiceAddress field.
inline
const std::string &ClusterWindowBase::getServiceAddress(void) const
{
    return _sfServiceAddress.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the ClusterWindow::_sfServiceAddress field.
inline
std::string &ClusterWindowBase::getServiceAddress(void)
{
    return _sfServiceAddress.getValue();
}
#endif

//! Set the value of the ClusterWindow::_sfServiceAddress field.
inline
void ClusterWindowBase::setServiceAddress(const std::string &value)
{
    _sfServiceAddress.setValue(value);
}

//! Get the value of the ClusterWindow::_sfServiceInterface field.
inline
std::string &ClusterWindowBase::editServiceInterface(void)
{
    return _sfServiceInterface.getValue();
}

//! Get the value of the ClusterWindow::_sfServiceInterface field.
inline
const std::string &ClusterWindowBase::getServiceInterface(void) const
{
    return _sfServiceInterface.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the ClusterWindow::_sfServiceInterface field.
inline
std::string &ClusterWindowBase::getServiceInterface(void)
{
    return _sfServiceInterface.getValue();
}
#endif

//! Set the value of the ClusterWindow::_sfServiceInterface field.
inline
void ClusterWindowBase::setServiceInterface(const std::string &value)
{
    _sfServiceInterface.setValue(value);
}

//! Get the value of the ClusterWindow::_sfClientWindow field.
inline
WindowPtr &ClusterWindowBase::editClientWindow(void)
{
    return _sfClientWindow.getValue();
}

//! Get the value of the ClusterWindow::_sfClientWindow field.
inline
const WindowPtr &ClusterWindowBase::getClientWindow(void) const
{
    return _sfClientWindow.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the ClusterWindow::_sfClientWindow field.
inline
WindowPtr &ClusterWindowBase::getClientWindow(void)
{
    return _sfClientWindow.getValue();
}
#endif

//! Set the value of the ClusterWindow::_sfClientWindow field.
inline
void ClusterWindowBase::setClientWindow(const WindowPtr &value)
{
    _sfClientWindow.setValue(value);
}

//! Get the value of the ClusterWindow::_sfInterleave field.
inline
UInt32 &ClusterWindowBase::editInterleave(void)
{
    return _sfInterleave.getValue();
}

//! Get the value of the ClusterWindow::_sfInterleave field.
inline
const UInt32 &ClusterWindowBase::getInterleave(void) const
{
    return _sfInterleave.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the ClusterWindow::_sfInterleave field.
inline
UInt32 &ClusterWindowBase::getInterleave(void)
{
    return _sfInterleave.getValue();
}
#endif

//! Set the value of the ClusterWindow::_sfInterleave field.
inline
void ClusterWindowBase::setInterleave(const UInt32 &value)
{
    _sfInterleave.setValue(value);
}

//! Get the value of the ClusterWindow::_sfFrameCount field.
inline
UInt32 &ClusterWindowBase::editFrameCount(void)
{
    return _sfFrameCount.getValue();
}

//! Get the value of the ClusterWindow::_sfFrameCount field.
inline
const UInt32 &ClusterWindowBase::getFrameCount(void) const
{
    return _sfFrameCount.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the ClusterWindow::_sfFrameCount field.
inline
UInt32 &ClusterWindowBase::getFrameCount(void)
{
    return _sfFrameCount.getValue();
}
#endif

//! Set the value of the ClusterWindow::_sfFrameCount field.
inline
void ClusterWindowBase::setFrameCount(const UInt32 &value)
{
    _sfFrameCount.setValue(value);
}

//! Get the value of the ClusterWindow::_sfComposer field.
inline
ImageComposerPtr &ClusterWindowBase::editComposer(void)
{
    return _sfComposer.getValue();
}

//! Get the value of the ClusterWindow::_sfComposer field.
inline
const ImageComposerPtr &ClusterWindowBase::getComposer(void) const
{
    return _sfComposer.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the ClusterWindow::_sfComposer field.
inline
ImageComposerPtr &ClusterWindowBase::getComposer(void)
{
    return _sfComposer.getValue();
}
#endif

//! Set the value of the ClusterWindow::_sfComposer field.
inline
void ClusterWindowBase::setComposer(const ImageComposerPtr &value)
{
    _sfComposer.setValue(value);
}

//! Get the value of the ClusterWindow::_sfDirty field.
inline
bool &ClusterWindowBase::editDirty(void)
{
    return _sfDirty.getValue();
}

//! Get the value of the ClusterWindow::_sfDirty field.
inline
const bool &ClusterWindowBase::getDirty(void) const
{
    return _sfDirty.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the ClusterWindow::_sfDirty field.
inline
bool &ClusterWindowBase::getDirty(void)
{
    return _sfDirty.getValue();
}
#endif

//! Set the value of the ClusterWindow::_sfDirty field.
inline
void ClusterWindowBase::setDirty(const bool &value)
{
    _sfDirty.setValue(value);
}


//! Get the value of the \a index element the ClusterWindow::_mfServers field.
inline
std::string &ClusterWindowBase::editServers(const UInt32 index)
{
    return _mfServers[index];
}

//! Get the value of the \a index element the ClusterWindow::_mfServers field.
inline
const std::string &ClusterWindowBase::getServers(const UInt32 index) const
{
    return _mfServers[index];
}

#ifndef OSG_2_PREP
//! Get the value of the \a index element the ClusterWindow::_mfServers field.
inline
std::string &ClusterWindowBase::getServers(const UInt32 index)
{
    return _mfServers[index];
}

//! Get the ClusterWindow::_mfServers field.
inline
MFString &ClusterWindowBase::getServers(void)
{
    return _mfServers;
}

//! Get the ClusterWindow::_mfServers field.
inline
const MFString &ClusterWindowBase::getServers(void) const
{
    return _mfServers;
}

#endif

//! Get the value of the \a index element the ClusterWindow::_mfAutostart field.
inline
std::string &ClusterWindowBase::editAutostart(const UInt32 index)
{
    return _mfAutostart[index];
}

//! Get the value of the \a index element the ClusterWindow::_mfAutostart field.
inline
const std::string &ClusterWindowBase::getAutostart(const UInt32 index) const
{
    return _mfAutostart[index];
}

#ifndef OSG_2_PREP
//! Get the value of the \a index element the ClusterWindow::_mfAutostart field.
inline
std::string &ClusterWindowBase::getAutostart(const UInt32 index)
{
    return _mfAutostart[index];
}

//! Get the ClusterWindow::_mfAutostart field.
inline
MFString &ClusterWindowBase::getAutostart(void)
{
    return _mfAutostart;
}

//! Get the ClusterWindow::_mfAutostart field.
inline
const MFString &ClusterWindowBase::getAutostart(void) const
{
    return _mfAutostart;
}

#endif

//! Get the value of the \a index element the ClusterWindow::_mfCalibration field.
inline
DisplayCalibrationPtr &ClusterWindowBase::editCalibration(const UInt32 index)
{
    return _mfCalibration[index];
}

//! Get the value of the \a index element the ClusterWindow::_mfCalibration field.
inline
const DisplayCalibrationPtr &ClusterWindowBase::getCalibration(const UInt32 index) const
{
    return _mfCalibration[index];
}

#ifndef OSG_2_PREP
//! Get the value of the \a index element the ClusterWindow::_mfCalibration field.
inline
DisplayCalibrationPtr &ClusterWindowBase::getCalibration(const UInt32 index)
{
    return _mfCalibration[index];
}

//! Get the ClusterWindow::_mfCalibration field.
inline
MFDisplayCalibrationPtr &ClusterWindowBase::getCalibration(void)
{
    return _mfCalibration;
}

//! Get the ClusterWindow::_mfCalibration field.
inline
const MFDisplayCalibrationPtr &ClusterWindowBase::getCalibration(void) const
{
    return _mfCalibration;
}

#endif

//! Get the value of the \a index element the ClusterWindow::_mfFilter field.
inline
DisplayFilterForegroundPtr &ClusterWindowBase::editFilter(const UInt32 index)
{
    return _mfFilter[index];
}

//! Get the value of the \a index element the ClusterWindow::_mfFilter field.
inline
const DisplayFilterForegroundPtr &ClusterWindowBase::getFilter(const UInt32 index) const
{
    return _mfFilter[index];
}

#ifndef OSG_2_PREP
//! Get the value of the \a index element the ClusterWindow::_mfFilter field.
inline
DisplayFilterForegroundPtr &ClusterWindowBase::getFilter(const UInt32 index)
{
    return _mfFilter[index];
}

//! Get the ClusterWindow::_mfFilter field.
inline
MFDisplayFilterForegroundPtr &ClusterWindowBase::getFilter(void)
{
    return _mfFilter;
}

//! Get the ClusterWindow::_mfFilter field.
inline
const MFDisplayFilterForegroundPtr &ClusterWindowBase::getFilter(void) const
{
    return _mfFilter;
}

#endif

OSG_END_NAMESPACE

#define OSGCLUSTERWINDOWBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.21 2008/06/09 07:30:44 vossg Exp $"
