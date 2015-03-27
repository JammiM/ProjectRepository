/****************************************************************************
**
** Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtXmlPatterns module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include <QString>

#include "qatomiccomparator_p.h"

QT_BEGIN_NAMESPACE

using namespace QPatternist;

AtomicComparator::AtomicComparator()
{
}

AtomicComparator::~AtomicComparator()
{
}

AtomicComparator::ComparisonResult
AtomicComparator::compare(const Item &,
                          const AtomicComparator::Operator,
                          const Item &) const
{
    Q_ASSERT_X(false, Q_FUNC_INFO, "This function should never be called.");
    return LessThan;
}

QString AtomicComparator::displayName(const AtomicComparator::Operator op,
                                      const ComparisonType type)
{
    Q_ASSERT(type == AsGeneralComparison || type == AsValueComparison);
    if(type == AsGeneralComparison)
    {
        switch(op)
        {
            case OperatorEqual:
                return QLatin1String("=");
            case OperatorGreaterOrEqual:
                return QLatin1String("<=");
            case OperatorGreaterThan:
                return QLatin1String("<");
            case OperatorLessOrEqual:
                return QLatin1String(">=");
            case OperatorLessThanNaNLeast:
            /* Fallthrough. */
            case OperatorLessThanNaNGreatest:
            /* Fallthrough. */
            case OperatorLessThan:
                return QLatin1String(">");
            case OperatorNotEqual:
                return QLatin1String("!=");
        }
    }

    switch(op)
    {
        case OperatorEqual:
            return QLatin1String("eq");
        case OperatorGreaterOrEqual:
            return QLatin1String("ge");
        case OperatorGreaterThan:
            return QLatin1String("gt");
        case OperatorLessOrEqual:
            return QLatin1String("le");
        case OperatorLessThanNaNLeast:
        /* Fallthrough. */
        case OperatorLessThanNaNGreatest:
        /* Fallthrough. */
        case OperatorLessThan:
            return QLatin1String("lt");
        case OperatorNotEqual:
            return QLatin1String("ne");
    }

    Q_ASSERT(false);
    return QString(); /* GCC unbarfer. */
}

QT_END_NAMESPACE
