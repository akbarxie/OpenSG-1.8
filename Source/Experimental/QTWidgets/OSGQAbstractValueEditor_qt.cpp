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

#include "OSGQAbstractValueEditor_qt.h"

#include <OSGLog.h>

#include <OSGAction.xpm>

#include <qpushbutton.h>

OSG_USING_NAMESPACE


QAbstractValueEditor::QAbstractValueEditor(QWidget *pParent, const char *name)
    : Inherited      (pParent, name),
      _bLabelsVisible(true         ),
      _bReadOnly     (true         )
{
}

QAbstractValueEditor::~QAbstractValueEditor(void)
{
}

void
QAbstractValueEditor::setLabelsVisible(bool bLabelsVisible)
{
    _bLabelsVisible = bLabelsVisible;
}

void
QAbstractValueEditor::setReadOnly(bool bReadOnly)
{
    _bReadOnly = bReadOnly;
}

void
QAbstractValueEditor::readField(
    FieldContainerPtr pFC,          UInt32 uiFieldId,
    UInt32            uiValueIndex, UInt32 uiAspect  )
{
    SWARNING << "QAbstractValueEditor::readField called. ignoring." << endLog;
}

void
QAbstractValueEditor::readField(
    FieldContainerPtr pFC,         UInt32 uiFieldId,
    UInt32            uiValueIndex                  )
{
    readField(pFC, uiFieldId, uiValueIndex, Thread::getCurrent()->getAspect());
}

void
QAbstractValueEditor::writeField(
    FieldContainerPtr pFC,         UInt32 uiFieldId,
    UInt32            uiValueIndex                  )
{
    SWARNING << "QAbstractValueEditor::writeField called. ignoring." << endLog;
}

void
QAbstractValueEditor::addFieldElem(
    FieldContainerPtr pFC,         UInt32 uiFieldId,
    UInt32            uiValueIndex                  )
{
    SWARNING << "QAbstractValueEditor::addFieldElem called. ignoring."
             << endLog;
}

void
QAbstractValueEditor::removeFieldElem(
    FieldContainerPtr pFC,         UInt32 uiFieldId,
    UInt32            uiValueIndex                  )
{
    SWARNING << "QAbstractValueEditor::removeFieldElem called. ignoring."
             << endLog;
}

// include generated files
#include "OSGQAbstractValueEditor_qt_moc.cpp"

/*------------------------------------------------------------------------*/
/*                              cvs id's                                  */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning(disable : 177)
#endif

namespace
{
    static Char8 cvsid_cpp       [] = "@(#)$Id: OSGQAbstractValueEditor_qt.cpp,v 1.4 2004/12/20 11:09:52 neumannc Exp $";
    static Char8 cvsid_hpp       [] = OSGQABSTRACTVALUEEDITORQT_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGQABSTRACTVALUEEDITORQT_INLINE_CVSID;
}

#ifdef OSG_LINUX_ICC
#pragma warning(enable : 177)
#endif

#ifdef OSG_SGI_CC
#pragma reset woff 1174
#endif
