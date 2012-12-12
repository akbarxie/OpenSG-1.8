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
 **     class Viewport
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGVIEWPORTBASE_H_
#define _OSGVIEWPORTBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OSGConfig.h>
#include <OSGSystemDef.h>

#include <OSGBaseTypes.h>
#include <OSGRefPtr.h>
#include <OSGCoredNodePtr.h>

#include <OSGAttachmentContainer.h> // Parent

#include <OSGReal32Fields.h> // Left type
#include <OSGReal32Fields.h> // Right type
#include <OSGReal32Fields.h> // Bottom type
#include <OSGReal32Fields.h> // Top type
#include <OSGWindowFields.h> // Parent type
#include <OSGCameraFields.h> // Camera type
#include <OSGNodeFields.h> // Root type
#include <OSGBackgroundFields.h> // Background type
#include <OSGForegroundFields.h> // Foregrounds type
#include <OSGUInt32Fields.h> // TravMask type
#include <OSGReal32Fields.h> // DrawTime type

#include <OSGViewportFields.h>

OSG_BEGIN_NAMESPACE

class Viewport;
class BinaryDataHandler;

//! \brief Viewport Base Class.

class OSG_SYSTEMLIB_DLLMAPPING ViewportBase : public AttachmentContainer
{
  private:

    typedef AttachmentContainer    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef ViewportPtr  Ptr;

    enum
    {
        LeftFieldId        = Inherited::NextFieldId,
        RightFieldId       = LeftFieldId        + 1,
        BottomFieldId      = RightFieldId       + 1,
        TopFieldId         = BottomFieldId      + 1,
        ParentFieldId      = TopFieldId         + 1,
        CameraFieldId      = ParentFieldId      + 1,
        RootFieldId        = CameraFieldId      + 1,
        BackgroundFieldId  = RootFieldId        + 1,
        ForegroundsFieldId = BackgroundFieldId  + 1,
        TravMaskFieldId    = ForegroundsFieldId + 1,
        DrawTimeFieldId    = TravMaskFieldId    + 1,
        NextFieldId        = DrawTimeFieldId    + 1
    };

    static const OSG::BitVector LeftFieldMask;
    static const OSG::BitVector RightFieldMask;
    static const OSG::BitVector BottomFieldMask;
    static const OSG::BitVector TopFieldMask;
    static const OSG::BitVector ParentFieldMask;
    static const OSG::BitVector CameraFieldMask;
    static const OSG::BitVector RootFieldMask;
    static const OSG::BitVector BackgroundFieldMask;
    static const OSG::BitVector ForegroundsFieldMask;
    static const OSG::BitVector TravMaskFieldMask;
    static const OSG::BitVector DrawTimeFieldMask;


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


           SFReal32            *editSFLeft           (void);
     const SFReal32            *getSFLeft           (void) const;
#ifndef OSG_2_PREP
           SFReal32            *getSFLeft           (void);
#endif

           SFReal32            *editSFRight          (void);
     const SFReal32            *getSFRight          (void) const;
#ifndef OSG_2_PREP
           SFReal32            *getSFRight          (void);
#endif

           SFReal32            *editSFBottom         (void);
     const SFReal32            *getSFBottom         (void) const;
#ifndef OSG_2_PREP
           SFReal32            *getSFBottom         (void);
#endif

           SFReal32            *editSFTop            (void);
     const SFReal32            *getSFTop            (void) const;
#ifndef OSG_2_PREP
           SFReal32            *getSFTop            (void);
#endif

           SFWindowPtr         *editSFParent         (void);
     const SFWindowPtr         *getSFParent         (void) const;
#ifndef OSG_2_PREP
           SFWindowPtr         *getSFParent         (void);
#endif

           SFCameraPtr         *editSFCamera         (void);
     const SFCameraPtr         *getSFCamera         (void) const;
#ifndef OSG_2_PREP
           SFCameraPtr         *getSFCamera         (void);
#endif

           SFNodePtr           *editSFRoot           (void);
     const SFNodePtr           *getSFRoot           (void) const;
#ifndef OSG_2_PREP
           SFNodePtr           *getSFRoot           (void);
#endif

           SFBackgroundPtr     *editSFBackground     (void);
     const SFBackgroundPtr     *getSFBackground     (void) const;
#ifndef OSG_2_PREP
           SFBackgroundPtr     *getSFBackground     (void);
#endif

           MFForegroundPtr     *editMFForegrounds    (void);
     const MFForegroundPtr     *getMFForegrounds    (void) const;
#ifndef OSG_2_PREP
           MFForegroundPtr     *getMFForegrounds    (void);
#endif

           SFUInt32            *editSFTravMask       (void);
     const SFUInt32            *getSFTravMask       (void) const;
#ifndef OSG_2_PREP
           SFUInt32            *getSFTravMask       (void);
#endif

           SFReal32            *editSFDrawTime       (void);
     const SFReal32            *getSFDrawTime       (void) const;
#ifndef OSG_2_PREP
           SFReal32            *getSFDrawTime       (void);
#endif


           Real32              &editLeft           (void);
     const Real32              &getLeft           (void) const;
#ifndef OSG_2_PREP
           Real32              &getLeft           (void);
#endif

           Real32              &editRight          (void);
     const Real32              &getRight          (void) const;
#ifndef OSG_2_PREP
           Real32              &getRight          (void);
#endif

           Real32              &editBottom         (void);
     const Real32              &getBottom         (void) const;
#ifndef OSG_2_PREP
           Real32              &getBottom         (void);
#endif

           Real32              &editTop            (void);
     const Real32              &getTop            (void) const;
#ifndef OSG_2_PREP
           Real32              &getTop            (void);
#endif

           WindowPtr           &editParent         (void);
     const WindowPtr           &getParent         (void) const;
#ifndef OSG_2_PREP
           WindowPtr           &getParent         (void);
#endif

           CameraPtr           &editCamera         (void);
     const CameraPtr           &getCamera         (void) const;
#ifndef OSG_2_PREP
           CameraPtr           &getCamera         (void);
#endif

           NodePtr             &editRoot           (void);
     const NodePtr             &getRoot           (void) const;
#ifndef OSG_2_PREP
           NodePtr             &getRoot           (void);
#endif

           BackgroundPtr       &editBackground     (void);
     const BackgroundPtr       &getBackground     (void) const;
#ifndef OSG_2_PREP
           BackgroundPtr       &getBackground     (void);
#endif

           UInt32              &editTravMask       (void);
     const UInt32              &getTravMask       (void) const;
#ifndef OSG_2_PREP
           UInt32              &getTravMask       (void);
#endif

           Real32              &editDrawTime       (void);
     const Real32              &getDrawTime       (void) const;
#ifndef OSG_2_PREP
           Real32              &getDrawTime       (void);
#endif

           ForegroundPtr       &editForegrounds    (const UInt32 index);
     const ForegroundPtr       &getForegrounds    (const UInt32 index) const;
#ifndef OSG_2_PREP
           ForegroundPtr       &getForegrounds    (const UInt32 index);
           MFForegroundPtr     &getForegrounds    (void);
     const MFForegroundPtr     &getForegrounds    (void) const;
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setLeft           ( const Real32 &value );
     void setRight          ( const Real32 &value );
     void setBottom         ( const Real32 &value );
     void setTop            ( const Real32 &value );
     void setParent         ( const WindowPtr &value );
     void setCamera         ( const CameraPtr &value );
     void setRoot           ( const NodePtr &value );
     void setBackground     ( const BackgroundPtr &value );
     void setTravMask       ( const UInt32 &value );
     void setDrawTime       ( const Real32 &value );

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

    static  ViewportPtr      create          (void); 
    static  ViewportPtr      createEmpty     (void); 

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

    SFReal32            _sfLeft;
    SFReal32            _sfRight;
    SFReal32            _sfBottom;
    SFReal32            _sfTop;
    SFWindowPtr         _sfParent;
    SFCameraPtr         _sfCamera;
    SFNodePtr           _sfRoot;
    SFBackgroundPtr     _sfBackground;
    MFForegroundPtr     _mfForegrounds;
    SFUInt32            _sfTravMask;
    SFReal32            _sfDrawTime;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    ViewportBase(void);
    ViewportBase(const ViewportBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ViewportBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      ViewportBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      ViewportBase *pOther,
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
    void operator =(const ViewportBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef ViewportBase *ViewportBaseP;

typedef osgIF<ViewportBase::isNodeCore,
              CoredNodePtr<Viewport>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet ViewportNodePtr;

typedef RefPtr<ViewportPtr> ViewportRefPtr;

OSG_END_NAMESPACE

#define OSGVIEWPORTBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.42 2008/06/09 12:26:59 vossg Exp $"

#endif /* _OSGVIEWPORTBASE_H_ */