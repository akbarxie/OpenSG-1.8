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
 **     class ShadowViewport
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSHADOWVIEWPORTBASE_H_
#define _OSGSHADOWVIEWPORTBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OSGConfig.h>
#include <OSGSystemDef.h>

#include <OSGBaseTypes.h>
#include <OSGRefPtr.h>
#include <OSGCoredNodePtr.h>

#include <OSGStereoBufferViewport.h> // Parent

#include <OSGReal32Fields.h> // OffBias type
#include <OSGReal32Fields.h> // OffFactor type
#include <OSGNodeFields.h> // SceneRoot type
#include <OSGUInt32Fields.h> // MapSize type
#include <OSGNodeFields.h> // LightNodes type
#include <OSGNodeFields.h> // ExcludeNodes type
#include <OSGBoolFields.h> // MapAutoUpdate type
#include <OSGUInt32Fields.h> // ShadowMode type
#include <OSGReal32Fields.h> // ShadowSmoothness type
#include <OSGBoolFields.h> // ShadowOn type
#include <OSGBoolFields.h> // AutoSearchForLights type
#include <OSGReal32Fields.h> // GlobalShadowIntensity type
#include <OSGBoolFields.h> // FboOn type
#include <OSGBoolFields.h> // AutoExcludeTransparentNodes type
#include <OSGBoolFields.h> // DisableOccludedLights type
#include <OSGBoolFields.h> // Red type
#include <OSGBoolFields.h> // Blue type
#include <OSGBoolFields.h> // Green type
#include <OSGBoolFields.h> // Alpha type

#include <OSGShadowViewportFields.h>

OSG_BEGIN_NAMESPACE

class ShadowViewport;
class BinaryDataHandler;

//! \brief ShadowViewport Base Class.

class OSG_SYSTEMLIB_DLLMAPPING ShadowViewportBase : public StereoBufferViewport
{
  private:

    typedef StereoBufferViewport    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef ShadowViewportPtr  Ptr;

    enum
    {
        OffBiasFieldId                     = Inherited::NextFieldId,
        OffFactorFieldId                   = OffBiasFieldId                     + 1,
        SceneRootFieldId                   = OffFactorFieldId                   + 1,
        MapSizeFieldId                     = SceneRootFieldId                   + 1,
        LightNodesFieldId                  = MapSizeFieldId                     + 1,
        ExcludeNodesFieldId                = LightNodesFieldId                  + 1,
        MapAutoUpdateFieldId               = ExcludeNodesFieldId                + 1,
        ShadowModeFieldId                  = MapAutoUpdateFieldId               + 1,
        ShadowSmoothnessFieldId            = ShadowModeFieldId                  + 1,
        ShadowOnFieldId                    = ShadowSmoothnessFieldId            + 1,
        AutoSearchForLightsFieldId         = ShadowOnFieldId                    + 1,
        GlobalShadowIntensityFieldId       = AutoSearchForLightsFieldId         + 1,
        FboOnFieldId                       = GlobalShadowIntensityFieldId       + 1,
        AutoExcludeTransparentNodesFieldId = FboOnFieldId                       + 1,
        DisableOccludedLightsFieldId       = AutoExcludeTransparentNodesFieldId + 1,
        RedFieldId                         = DisableOccludedLightsFieldId       + 1,
        BlueFieldId                        = RedFieldId                         + 1,
        GreenFieldId                       = BlueFieldId                        + 1,
        AlphaFieldId                       = GreenFieldId                       + 1,
        NextFieldId                        = AlphaFieldId                       + 1
    };

    static const OSG::BitVector OffBiasFieldMask;
    static const OSG::BitVector OffFactorFieldMask;
    static const OSG::BitVector SceneRootFieldMask;
    static const OSG::BitVector MapSizeFieldMask;
    static const OSG::BitVector LightNodesFieldMask;
    static const OSG::BitVector ExcludeNodesFieldMask;
    static const OSG::BitVector MapAutoUpdateFieldMask;
    static const OSG::BitVector ShadowModeFieldMask;
    static const OSG::BitVector ShadowSmoothnessFieldMask;
    static const OSG::BitVector ShadowOnFieldMask;
    static const OSG::BitVector AutoSearchForLightsFieldMask;
    static const OSG::BitVector GlobalShadowIntensityFieldMask;
    static const OSG::BitVector FboOnFieldMask;
    static const OSG::BitVector AutoExcludeTransparentNodesFieldMask;
    static const OSG::BitVector DisableOccludedLightsFieldMask;
    static const OSG::BitVector RedFieldMask;
    static const OSG::BitVector BlueFieldMask;
    static const OSG::BitVector GreenFieldMask;
    static const OSG::BitVector AlphaFieldMask;


    static const OSG::BitVector MTInfluenceMask;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static        FieldContainerType &getClassType    (void); 
    static        UInt32              getClassTypeId  (void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType  (void); 
    virtual const FieldContainerType &getType  (void) const; 

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


           SFReal32            *editSFOffBias        (void);
     const SFReal32            *getSFOffBias        (void) const;
#ifndef OSG_2_PREP
           SFReal32            *getSFOffBias        (void);
#endif

           SFReal32            *editSFOffFactor      (void);
     const SFReal32            *getSFOffFactor      (void) const;
#ifndef OSG_2_PREP
           SFReal32            *getSFOffFactor      (void);
#endif

           SFNodePtr           *editSFSceneRoot      (void);
     const SFNodePtr           *getSFSceneRoot      (void) const;
#ifndef OSG_2_PREP
           SFNodePtr           *getSFSceneRoot      (void);
#endif

           SFUInt32            *editSFMapSize        (void);
     const SFUInt32            *getSFMapSize        (void) const;
#ifndef OSG_2_PREP
           SFUInt32            *getSFMapSize        (void);
#endif

           MFNodePtr           *editMFLightNodes     (void);
     const MFNodePtr           *getMFLightNodes     (void) const;
#ifndef OSG_2_PREP
           MFNodePtr           *getMFLightNodes     (void);
#endif

           MFNodePtr           *editMFExcludeNodes   (void);
     const MFNodePtr           *getMFExcludeNodes   (void) const;
#ifndef OSG_2_PREP
           MFNodePtr           *getMFExcludeNodes   (void);
#endif

           SFBool              *editSFMapAutoUpdate  (void);
     const SFBool              *getSFMapAutoUpdate  (void) const;
#ifndef OSG_2_PREP
           SFBool              *getSFMapAutoUpdate  (void);
#endif

           SFUInt32            *editSFShadowMode     (void);
     const SFUInt32            *getSFShadowMode     (void) const;
#ifndef OSG_2_PREP
           SFUInt32            *getSFShadowMode     (void);
#endif

           SFReal32            *editSFShadowSmoothness(void);
     const SFReal32            *getSFShadowSmoothness(void) const;
#ifndef OSG_2_PREP
           SFReal32            *getSFShadowSmoothness(void);
#endif

           SFBool              *editSFShadowOn       (void);
     const SFBool              *getSFShadowOn       (void) const;
#ifndef OSG_2_PREP
           SFBool              *getSFShadowOn       (void);
#endif

           SFBool              *editSFAutoSearchForLights(void);
     const SFBool              *getSFAutoSearchForLights(void) const;
#ifndef OSG_2_PREP
           SFBool              *getSFAutoSearchForLights(void);
#endif

           SFReal32            *editSFGlobalShadowIntensity(void);
     const SFReal32            *getSFGlobalShadowIntensity(void) const;
#ifndef OSG_2_PREP
           SFReal32            *getSFGlobalShadowIntensity(void);
#endif

           SFBool              *editSFFboOn          (void);
     const SFBool              *getSFFboOn          (void) const;
#ifndef OSG_2_PREP
           SFBool              *getSFFboOn          (void);
#endif

           SFBool              *editSFAutoExcludeTransparentNodes(void);
     const SFBool              *getSFAutoExcludeTransparentNodes(void) const;
#ifndef OSG_2_PREP
           SFBool              *getSFAutoExcludeTransparentNodes(void);
#endif

           SFBool              *editSFDisableOccludedLights(void);
     const SFBool              *getSFDisableOccludedLights(void) const;
#ifndef OSG_2_PREP
           SFBool              *getSFDisableOccludedLights(void);
#endif

           SFBool              *editSFRed            (void);
     const SFBool              *getSFRed            (void) const;
#ifndef OSG_2_PREP
           SFBool              *getSFRed            (void);
#endif

           SFBool              *editSFBlue           (void);
     const SFBool              *getSFBlue           (void) const;
#ifndef OSG_2_PREP
           SFBool              *getSFBlue           (void);
#endif

           SFBool              *editSFGreen          (void);
     const SFBool              *getSFGreen          (void) const;
#ifndef OSG_2_PREP
           SFBool              *getSFGreen          (void);
#endif

           SFBool              *editSFAlpha          (void);
     const SFBool              *getSFAlpha          (void) const;
#ifndef OSG_2_PREP
           SFBool              *getSFAlpha          (void);
#endif


           Real32              &editOffBias        (void);
     const Real32              &getOffBias        (void) const;
#ifndef OSG_2_PREP
           Real32              &getOffBias        (void);
#endif

           Real32              &editOffFactor      (void);
     const Real32              &getOffFactor      (void) const;
#ifndef OSG_2_PREP
           Real32              &getOffFactor      (void);
#endif

           NodePtr             &editSceneRoot      (void);
     const NodePtr             &getSceneRoot      (void) const;
#ifndef OSG_2_PREP
           NodePtr             &getSceneRoot      (void);
#endif

           UInt32              &editMapSize        (void);
     const UInt32              &getMapSize        (void) const;
#ifndef OSG_2_PREP
           UInt32              &getMapSize        (void);
#endif

           bool                &editMapAutoUpdate  (void);
     const bool                &getMapAutoUpdate  (void) const;
#ifndef OSG_2_PREP
           bool                &getMapAutoUpdate  (void);
#endif

           UInt32              &editShadowMode     (void);
     const UInt32              &getShadowMode     (void) const;
#ifndef OSG_2_PREP
           UInt32              &getShadowMode     (void);
#endif

           Real32              &editShadowSmoothness(void);
     const Real32              &getShadowSmoothness(void) const;
#ifndef OSG_2_PREP
           Real32              &getShadowSmoothness(void);
#endif

           bool                &editShadowOn       (void);
     const bool                &getShadowOn       (void) const;
#ifndef OSG_2_PREP
           bool                &getShadowOn       (void);
#endif

           bool                &editAutoSearchForLights(void);
     const bool                &getAutoSearchForLights(void) const;
#ifndef OSG_2_PREP
           bool                &getAutoSearchForLights(void);
#endif

           Real32              &editGlobalShadowIntensity(void);
     const Real32              &getGlobalShadowIntensity(void) const;
#ifndef OSG_2_PREP
           Real32              &getGlobalShadowIntensity(void);
#endif

           bool                &editFboOn          (void);
     const bool                &getFboOn          (void) const;
#ifndef OSG_2_PREP
           bool                &getFboOn          (void);
#endif

           bool                &editAutoExcludeTransparentNodes(void);
     const bool                &getAutoExcludeTransparentNodes(void) const;
#ifndef OSG_2_PREP
           bool                &getAutoExcludeTransparentNodes(void);
#endif

           bool                &editDisableOccludedLights(void);
     const bool                &getDisableOccludedLights(void) const;
#ifndef OSG_2_PREP
           bool                &getDisableOccludedLights(void);
#endif

           bool                &editRed            (void);
     const bool                &getRed            (void) const;
#ifndef OSG_2_PREP
           bool                &getRed            (void);
#endif

           bool                &editBlue           (void);
     const bool                &getBlue           (void) const;
#ifndef OSG_2_PREP
           bool                &getBlue           (void);
#endif

           bool                &editGreen          (void);
     const bool                &getGreen          (void) const;
#ifndef OSG_2_PREP
           bool                &getGreen          (void);
#endif

           bool                &editAlpha          (void);
     const bool                &getAlpha          (void) const;
#ifndef OSG_2_PREP
           bool                &getAlpha          (void);
#endif

           NodePtr             &editLightNodes     (const UInt32 index);
     const NodePtr             &getLightNodes     (const UInt32 index) const;
#ifndef OSG_2_PREP
           NodePtr             &getLightNodes     (const UInt32 index);
           MFNodePtr           &getLightNodes     (void);
     const MFNodePtr           &getLightNodes     (void) const;
#endif

           NodePtr             &editExcludeNodes   (const UInt32 index);
     const NodePtr             &getExcludeNodes   (const UInt32 index) const;
#ifndef OSG_2_PREP
           NodePtr             &getExcludeNodes   (const UInt32 index);
           MFNodePtr           &getExcludeNodes   (void);
     const MFNodePtr           &getExcludeNodes   (void) const;
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setOffBias        ( const Real32 &value );
     void setOffFactor      ( const Real32 &value );
     void setSceneRoot      ( const NodePtr &value );
     void setMapSize        ( const UInt32 &value );
     void setMapAutoUpdate  ( const bool &value );
     void setShadowMode     ( const UInt32 &value );
     void setShadowSmoothness( const Real32 &value );
     void setShadowOn       ( const bool &value );
     void setAutoSearchForLights( const bool &value );
     void setGlobalShadowIntensity( const Real32 &value );
     void setFboOn          ( const bool &value );
     void setAutoExcludeTransparentNodes( const bool &value );
     void setDisableOccludedLights( const bool &value );
     void setRed            ( const bool &value );
     void setBlue           ( const bool &value );
     void setGreen          ( const bool &value );
     void setAlpha          ( const bool &value );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (const BitVector         &whichField);
    virtual void   copyToBin  (      BinaryDataHandler &pMem,
                               const BitVector         &whichField);
    virtual void   copyFromBin(      BinaryDataHandler &pMem,
                               const BitVector         &whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  ShadowViewportPtr      create          (void); 
    static  ShadowViewportPtr      createEmpty     (void); 

    /*! \}                                                                 */

    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerPtr     shallowCopy     (void) const; 

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/
  protected:

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFReal32            _sfOffBias;
    SFReal32            _sfOffFactor;
    SFNodePtr           _sfSceneRoot;
    SFUInt32            _sfMapSize;
    MFNodePtr           _mfLightNodes;
    MFNodePtr           _mfExcludeNodes;
    SFBool              _sfMapAutoUpdate;
    SFUInt32            _sfShadowMode;
    SFReal32            _sfShadowSmoothness;
    SFBool              _sfShadowOn;
    SFBool              _sfAutoSearchForLights;
    SFReal32            _sfGlobalShadowIntensity;
    SFBool              _sfFboOn;
    SFBool              _sfAutoExcludeTransparentNodes;
    SFBool              _sfDisableOccludedLights;
    SFBool              _sfRed;
    SFBool              _sfBlue;
    SFBool              _sfGreen;
    SFBool              _sfAlpha;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    ShadowViewportBase(void);
    ShadowViewportBase(const ShadowViewportBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ShadowViewportBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      ShadowViewportBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      ShadowViewportBase *pOther,
                         const BitVector         &whichField,
                         const SyncInfo          &sInfo     );

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField,
                               const SyncInfo          &sInfo);

    virtual void execBeginEdit     (const BitVector &whichField,
                                          UInt32     uiAspect,
                                          UInt32     uiContainerSize);

            void execBeginEditImpl (const BitVector &whichField,
                                          UInt32     uiAspect,
                                          UInt32     uiContainerSize);

    virtual void onDestroyAspect(UInt32 uiId, UInt32 uiAspect);
#endif

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/
  private:

    friend class FieldContainer;

    static FieldDescription   *_desc[];
    static FieldContainerType  _type;


    // prohibit default functions (move to 'public' if you need one)
    void operator =(const ShadowViewportBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef ShadowViewportBase *ShadowViewportBaseP;

typedef osgIF<ShadowViewportBase::isNodeCore,
              CoredNodePtr<ShadowViewport>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet ShadowViewportNodePtr;

typedef RefPtr<ShadowViewportPtr> ShadowViewportRefPtr;

OSG_END_NAMESPACE

#define OSGSHADOWVIEWPORTBASE_HEADER_CVSID "@(#)$Id: OSGShadowViewportBase.h,v 1.16 2008/06/09 12:28:07 vossg Exp $"

#endif /* _OSGSHADOWVIEWPORTBASE_H_ */
