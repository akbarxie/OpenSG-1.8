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
 **     class LightModelChunk
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGLIGHTMODELCHUNKBASE_H_
#define _OSGLIGHTMODELCHUNKBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OSGConfig.h>
#include <OSGSystemDef.h>

#include <OSGBaseTypes.h>
#include <OSGRefPtr.h>
#include <OSGCoredNodePtr.h>

#include <OSGStateChunk.h> // Parent

#include <OSGColor4fFields.h> // Ambient type
#include <OSGGLenumFields.h> // ColorControl type
#include <OSGBoolFields.h> // LocalViewer type

#include <OSGLightModelChunkFields.h>

OSG_BEGIN_NAMESPACE

class LightModelChunk;
class BinaryDataHandler;

//! \brief LightModelChunk Base Class.

class OSG_SYSTEMLIB_DLLMAPPING LightModelChunkBase : public StateChunk
{
  private:

    typedef StateChunk    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef LightModelChunkPtr  Ptr;

    enum
    {
        AmbientFieldId      = Inherited::NextFieldId,
        ColorControlFieldId = AmbientFieldId      + 1,
        LocalViewerFieldId  = ColorControlFieldId + 1,
        NextFieldId         = LocalViewerFieldId  + 1
    };

    static const OSG::BitVector AmbientFieldMask;
    static const OSG::BitVector ColorControlFieldMask;
    static const OSG::BitVector LocalViewerFieldMask;


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


           SFColor4f           *editSFAmbient        (void);
     const SFColor4f           *getSFAmbient        (void) const;
#ifndef OSG_2_PREP
           SFColor4f           *getSFAmbient        (void);
#endif

           SFGLenum            *editSFColorControl   (void);
     const SFGLenum            *getSFColorControl   (void) const;
#ifndef OSG_2_PREP
           SFGLenum            *getSFColorControl   (void);
#endif

           SFBool              *editSFLocalViewer    (void);
     const SFBool              *getSFLocalViewer    (void) const;
#ifndef OSG_2_PREP
           SFBool              *getSFLocalViewer    (void);
#endif


           Color4f             &editAmbient        (void);
     const Color4f             &getAmbient        (void) const;
#ifndef OSG_2_PREP
           Color4f             &getAmbient        (void);
#endif

           GLenum              &editColorControl   (void);
     const GLenum              &getColorControl   (void) const;
#ifndef OSG_2_PREP
           GLenum              &getColorControl   (void);
#endif

           bool                &editLocalViewer    (void);
     const bool                &getLocalViewer    (void) const;
#ifndef OSG_2_PREP
           bool                &getLocalViewer    (void);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setAmbient        ( const Color4f &value );
     void setColorControl   ( const GLenum &value );
     void setLocalViewer    ( const bool &value );

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

    static  LightModelChunkPtr      create          (void); 
    static  LightModelChunkPtr      createEmpty     (void); 

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

    SFColor4f           _sfAmbient;
    SFGLenum            _sfColorControl;
    SFBool              _sfLocalViewer;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    LightModelChunkBase(void);
    LightModelChunkBase(const LightModelChunkBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~LightModelChunkBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      LightModelChunkBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      LightModelChunkBase *pOther,
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
    void operator =(const LightModelChunkBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef LightModelChunkBase *LightModelChunkBaseP;

typedef osgIF<LightModelChunkBase::isNodeCore,
              CoredNodePtr<LightModelChunk>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet LightModelChunkNodePtr;

typedef RefPtr<LightModelChunkPtr> LightModelChunkRefPtr;

OSG_END_NAMESPACE

#define OSGLIGHTMODELCHUNKBASE_HEADER_CVSID "@(#)$Id: OSGLightModelChunkBase.h,v 1.6 2008/06/09 12:28:20 vossg Exp $"

#endif /* _OSGLIGHTMODELCHUNKBASE_H_ */