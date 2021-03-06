/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:19 2012
 *
 * Copyright (c) 2010 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt.
 * 
 * This file may be used under the terms of the GNU General Public
 * License versions 2.0 or 3.0 as published by the Free Software
 * Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
 * included in the packaging of this file.  Alternatively you may (at
 * your option) use any later version of the GNU General Public
 * License if such license has been publicly approved by Riverbank
 * Computing Limited (or its successors, if any) and the KDE Free Qt
 * Foundation. In addition, as a special exception, Riverbank gives you
 * certain additional rights. These rights are described in the Riverbank
 * GPL Exception version 1.1, which can be found in the file
 * GPL_EXCEPTION.txt in this package.
 * 
 * Please review the following information to ensure GNU General
 * Public Licensing requirements will be met:
 * http://trolltech.com/products/qt/licenses/licensing/opensource/. If
 * you are unsure which license is appropriate for your use, please
 * review the following information:
 * http://trolltech.com/products/qt/licenses/licensing/licensingoverview
 * or contact the sales department at sales@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtGui.h"

#line 133 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qfontdatabase.sip"
#include <qfontdatabase.h>
#include <qlist.h>
#line 40 "sipQtGuiQList0100QFontDatabaseWritingSystem.cpp"

#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qfontdatabase.sip"
#include <qfontdatabase.h>
#line 44 "sipQtGuiQList0100QFontDatabaseWritingSystem.cpp"


extern "C" {static void assign_QList_0100QFontDatabase_WritingSystem(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0100QFontDatabase_WritingSystem(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QFontDatabase::WritingSystem> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QFontDatabase::WritingSystem> *>(sipSrc);
}


extern "C" {static void *array_QList_0100QFontDatabase_WritingSystem(SIP_SSIZE_T);}
static void *array_QList_0100QFontDatabase_WritingSystem(SIP_SSIZE_T sipNrElem)
{
    return new QList<QFontDatabase::WritingSystem>[sipNrElem];
}


extern "C" {static void *copy_QList_0100QFontDatabase_WritingSystem(const void *, SIP_SSIZE_T);}
static void *copy_QList_0100QFontDatabase_WritingSystem(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QFontDatabase::WritingSystem>(reinterpret_cast<const QList<QFontDatabase::WritingSystem> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0100QFontDatabase_WritingSystem(void *, int);}
static void release_QList_0100QFontDatabase_WritingSystem(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QList<QFontDatabase::WritingSystem> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QList_0100QFontDatabase_WritingSystem(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0100QFontDatabase_WritingSystem(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QFontDatabase::WritingSystem> **sipCppPtr = reinterpret_cast<QList<QFontDatabase::WritingSystem> **>(sipCppPtrV);

#line 164 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qfontdatabase.sip"
    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (!PyList_Check(sipPy))
            return 0;

        for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(sipPy); ++i)
            if (!PyObject_TypeCheck(PyList_GET_ITEM(sipPy, i), sipTypeAsPyTypeObject(sipType_QFontDatabase_WritingSystem)))
                return 0;

        return 1;
    }

    QList<QFontDatabase::WritingSystem> *ql = new QList<QFontDatabase::WritingSystem>;
 
    for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(sipPy); ++i)
    {
        QFontDatabase::WritingSystem ws = (QFontDatabase::WritingSystem)SIPLong_AsLong(PyList_GET_ITEM(sipPy, i));
 
        ql->append(ws);
    }
 
    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 110 "sipQtGuiQList0100QFontDatabaseWritingSystem.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0100QFontDatabase_WritingSystem(void *, PyObject *);}
static PyObject *convertFrom_QList_0100QFontDatabase_WritingSystem(void *sipCppV,PyObject *)
{
   QList<QFontDatabase::WritingSystem> *sipCpp = reinterpret_cast<QList<QFontDatabase::WritingSystem> *>(sipCppV);

#line 138 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qfontdatabase.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QFontDatabase::WritingSystem ws = sipCpp->at(i);
        PyObject *wsobj;

        if ((wsobj = sipConvertFromEnum(ws, sipType_QFontDatabase_WritingSystem)) == NULL)
        {
            Py_DECREF(l);

            return NULL;
        }

        PyList_SET_ITEM(l, i, wsobj);
    }

    return l;
#line 143 "sipQtGuiQList0100QFontDatabaseWritingSystem.cpp"
}


sipMappedTypeDef sipTypeDef_QtGui_QList_0100QFontDatabase_WritingSystem = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_4518,
        {0}
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_QList_0100QFontDatabase_WritingSystem,
    array_QList_0100QFontDatabase_WritingSystem,
    copy_QList_0100QFontDatabase_WritingSystem,
    release_QList_0100QFontDatabase_WritingSystem,
    convertTo_QList_0100QFontDatabase_WritingSystem,
    convertFrom_QList_0100QFontDatabase_WritingSystem
};
