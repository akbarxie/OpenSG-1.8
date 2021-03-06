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
 **     class SkinDeformer
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSKINDEFORMERBASE_H_
#define _OSGSKINDEFORMERBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OSGConfig.h>
#include <OSGContribDef.h>

#include <OSGBaseTypes.h>
#include <OSGRefPtr.h>
#include <OSGCoredNodePtr.h>

#include <OSGDeformer.h> // Parent

#include <OSGNodeFields.h> // Influences type
#include <OSGMatrixFields.h> // BaseMatrices type
#include <OSGUInt32Fields.h> // VertexIndices type
#include <OSGUInt16Fields.h> // InfluenceIndices type
#include <OSGReal32Fields.h> // InfluenceWeights type
#include <OSGUInt32Fields.h> // NormalIndices type
#include <OSGUInt16Fields.h> // NormalInfluenceIndices type
#include <OSGReal32Fields.h> // NormalInfluenceWeights type

#include <OSGSkinDeformerFields.h>

OSG_BEGIN_NAMESPACE

class SkinDeformer;
class BinaryDataHandler;

//! \brief SkinDeformer Base Class.

class OSG_CONTRIBLIB_DLLMAPPING SkinDeformerBase : public Deformer
{
  private:

    typedef Deformer    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef SkinDeformerPtr  Ptr;

    enum
    {
        InfluencesFieldId             = Inherited::NextFieldId,
        BaseMatricesFieldId           = InfluencesFieldId             + 1,
        VertexIndicesFieldId          = BaseMatricesFieldId           + 1,
        InfluenceIndicesFieldId       = VertexIndicesFieldId          + 1,
        InfluenceWeightsFieldId       = InfluenceIndicesFieldId       + 1,
        NormalIndicesFieldId          = InfluenceWeightsFieldId       + 1,
        NormalInfluenceIndicesFieldId = NormalIndicesFieldId          + 1,
        NormalInfluenceWeightsFieldId = NormalInfluenceIndicesFieldId + 1,
        NextFieldId                   = NormalInfluenceWeightsFieldId + 1
    };

    static const OSG::BitVector InfluencesFieldMask;
    static const OSG::BitVector BaseMatricesFieldMask;
    static const OSG::BitVector VertexIndicesFieldMask;
    static const OSG::BitVector InfluenceIndicesFieldMask;
    static const OSG::BitVector InfluenceWeightsFieldMask;
    static const OSG::BitVector NormalIndicesFieldMask;
    static const OSG::BitVector NormalInfluenceIndicesFieldMask;
    static const OSG::BitVector NormalInfluenceWeightsFieldMask;


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


           MFNodePtr           *editMFInfluences     (void);
     const MFNodePtr           *getMFInfluences     (void) const;
#ifndef OSG_2_PREP
           MFNodePtr           *getMFInfluences     (void);
#endif

           MFMatrix            *editMFBaseMatrices   (void);
     const MFMatrix            *getMFBaseMatrices   (void) const;
#ifndef OSG_2_PREP
           MFMatrix            *getMFBaseMatrices   (void);
#endif

           MFUInt32            *editMFVertexIndices  (void);
     const MFUInt32            *getMFVertexIndices  (void) const;
#ifndef OSG_2_PREP
           MFUInt32            *getMFVertexIndices  (void);
#endif

           MFUInt16            *editMFInfluenceIndices(void);
     const MFUInt16            *getMFInfluenceIndices(void) const;
#ifndef OSG_2_PREP
           MFUInt16            *getMFInfluenceIndices(void);
#endif

           MFReal32            *editMFInfluenceWeights(void);
     const MFReal32            *getMFInfluenceWeights(void) const;
#ifndef OSG_2_PREP
           MFReal32            *getMFInfluenceWeights(void);
#endif

           MFUInt32            *editMFNormalIndices  (void);
     const MFUInt32            *getMFNormalIndices  (void) const;
#ifndef OSG_2_PREP
           MFUInt32            *getMFNormalIndices  (void);
#endif

           MFUInt16            *editMFNormalInfluenceIndices(void);
     const MFUInt16            *getMFNormalInfluenceIndices(void) const;
#ifndef OSG_2_PREP
           MFUInt16            *getMFNormalInfluenceIndices(void);
#endif

           MFReal32            *editMFNormalInfluenceWeights(void);
     const MFReal32            *getMFNormalInfluenceWeights(void) const;
#ifndef OSG_2_PREP
           MFReal32            *getMFNormalInfluenceWeights(void);
#endif


           NodePtr             &editInfluences     (const UInt32 index);
     const NodePtr             &getInfluences     (const UInt32 index) const;
#ifndef OSG_2_PREP
           NodePtr             &getInfluences     (const UInt32 index);
           MFNodePtr           &getInfluences     (void);
     const MFNodePtr           &getInfluences     (void) const;
#endif

           Matrix              &editBaseMatrices   (const UInt32 index);
     const Matrix              &getBaseMatrices   (const UInt32 index) const;
#ifndef OSG_2_PREP
           Matrix              &getBaseMatrices   (const UInt32 index);
           MFMatrix            &getBaseMatrices   (void);
     const MFMatrix            &getBaseMatrices   (void) const;
#endif

           UInt32              &editVertexIndices  (const UInt32 index);
     const UInt32              &getVertexIndices  (const UInt32 index) const;
#ifndef OSG_2_PREP
           UInt32              &getVertexIndices  (const UInt32 index);
           MFUInt32            &getVertexIndices  (void);
     const MFUInt32            &getVertexIndices  (void) const;
#endif

           UInt16              &editInfluenceIndices(const UInt32 index);
     const UInt16              &getInfluenceIndices(const UInt32 index) const;
#ifndef OSG_2_PREP
           UInt16              &getInfluenceIndices(const UInt32 index);
           MFUInt16            &getInfluenceIndices(void);
     const MFUInt16            &getInfluenceIndices(void) const;
#endif

           Real32              &editInfluenceWeights(const UInt32 index);
     const Real32              &getInfluenceWeights(const UInt32 index) const;
#ifndef OSG_2_PREP
           Real32              &getInfluenceWeights(const UInt32 index);
           MFReal32            &getInfluenceWeights(void);
     const MFReal32            &getInfluenceWeights(void) const;
#endif

           UInt32              &editNormalIndices  (const UInt32 index);
     const UInt32              &getNormalIndices  (const UInt32 index) const;
#ifndef OSG_2_PREP
           UInt32              &getNormalIndices  (const UInt32 index);
           MFUInt32            &getNormalIndices  (void);
     const MFUInt32            &getNormalIndices  (void) const;
#endif

           UInt16              &editNormalInfluenceIndices(const UInt32 index);
     const UInt16              &getNormalInfluenceIndices(const UInt32 index) const;
#ifndef OSG_2_PREP
           UInt16              &getNormalInfluenceIndices(const UInt32 index);
           MFUInt16            &getNormalInfluenceIndices(void);
     const MFUInt16            &getNormalInfluenceIndices(void) const;
#endif

           Real32              &editNormalInfluenceWeights(const UInt32 index);
     const Real32              &getNormalInfluenceWeights(const UInt32 index) const;
#ifndef OSG_2_PREP
           Real32              &getNormalInfluenceWeights(const UInt32 index);
           MFReal32            &getNormalInfluenceWeights(void);
     const MFReal32            &getNormalInfluenceWeights(void) const;
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */


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

    static  SkinDeformerPtr      create          (void); 
    static  SkinDeformerPtr      createEmpty     (void); 

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

    MFNodePtr           _mfInfluences;
    MFMatrix            _mfBaseMatrices;
    MFUInt32            _mfVertexIndices;
    MFUInt16            _mfInfluenceIndices;
    MFReal32            _mfInfluenceWeights;
    MFUInt32            _mfNormalIndices;
    MFUInt16            _mfNormalInfluenceIndices;
    MFReal32            _mfNormalInfluenceWeights;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    SkinDeformerBase(void);
    SkinDeformerBase(const SkinDeformerBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~SkinDeformerBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      SkinDeformerBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      SkinDeformerBase *pOther,
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
    void operator =(const SkinDeformerBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef SkinDeformerBase *SkinDeformerBaseP;

typedef osgIF<SkinDeformerBase::isNodeCore,
              CoredNodePtr<SkinDeformer>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet SkinDeformerNodePtr;

typedef RefPtr<SkinDeformerPtr> SkinDeformerRefPtr;

OSG_END_NAMESPACE

#define OSGSKINDEFORMERBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.41 2008/06/09 07:30:44 vossg Exp $"

#endif /* _OSGSKINDEFORMERBASE_H_ */
