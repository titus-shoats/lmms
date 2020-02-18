/*
qsynth - A fluidsynth Qt GUI Interface.

   Copyright (C) 2003-2007, rncbc aka Rui Nuno Capela. All rights reserved.

   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public License
   as published by the Free Software Foundation; either version 2
   of the License, or (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License along
   with this program; if not, write to the Free Software Foundation, Inc.,
   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.


*/

/********************************************************************************
** Form generated from reading UI file 'patches_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATCHES_DIALOG_H
#define UI_PATCHES_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_patchesDialog
{
public:
    QVBoxLayout *vboxLayout;
    QSplitter *m_splitter;
    QTreeWidget *m_bankListView;
    QTreeWidget *m_progListView;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *m_okButton;
    QPushButton *m_cancelButton;

    void setupUi(QDialog *patchesDialog)
    {
        if (patchesDialog->objectName().isEmpty())
            patchesDialog->setObjectName(QString::fromUtf8("patchesDialog"));
        patchesDialog->resize(480, 350);
        patchesDialog->setMinimumSize(QSize(300, 150));
        vboxLayout = new QVBoxLayout(patchesDialog);
        vboxLayout->setSpacing(4);
        vboxLayout->setContentsMargins(4, 4, 4, 4);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        m_splitter = new QSplitter(patchesDialog);
        m_splitter->setObjectName(QString::fromUtf8("m_splitter"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_splitter->sizePolicy().hasHeightForWidth());
        m_splitter->setSizePolicy(sizePolicy);
        m_splitter->setOrientation(Qt::Horizontal);
        m_bankListView = new QTreeWidget(m_splitter);
        m_bankListView->setObjectName(QString::fromUtf8("m_bankListView"));
        m_bankListView->setMinimumSize(QSize(20, 0));
        m_bankListView->setMaximumSize(QSize(80, 32767));
        m_bankListView->setAlternatingRowColors(true);
        m_bankListView->setIndentation(4);
        m_bankListView->setRootIsDecorated(false);
        m_bankListView->setUniformRowHeights(true);
        m_bankListView->setItemsExpandable(false);
        m_bankListView->setSortingEnabled(true);
        m_bankListView->setAllColumnsShowFocus(true);
        m_splitter->addWidget(m_bankListView);
        m_progListView = new QTreeWidget(m_splitter);
        m_progListView->setObjectName(QString::fromUtf8("m_progListView"));
        m_progListView->setAlternatingRowColors(true);
        m_progListView->setIndentation(4);
        m_progListView->setRootIsDecorated(false);
        m_progListView->setUniformRowHeights(true);
        m_progListView->setItemsExpandable(false);
        m_progListView->setSortingEnabled(true);
        m_progListView->setAllColumnsShowFocus(true);
        m_splitter->addWidget(m_progListView);

        vboxLayout->addWidget(m_splitter);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(4);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(120, 8, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        m_okButton = new QPushButton(patchesDialog);
        m_okButton->setObjectName(QString::fromUtf8("m_okButton"));
        m_okButton->setIconSize(QSize(0, 0));

        hboxLayout->addWidget(m_okButton);

        m_cancelButton = new QPushButton(patchesDialog);
        m_cancelButton->setObjectName(QString::fromUtf8("m_cancelButton"));
        m_cancelButton->setIconSize(QSize(0, 0));

        hboxLayout->addWidget(m_cancelButton);


        vboxLayout->addLayout(hboxLayout);

        QWidget::setTabOrder(m_okButton, m_cancelButton);

        retranslateUi(patchesDialog);

        m_okButton->setDefault(true);


        QMetaObject::connectSlotsByName(patchesDialog);
    } // setupUi

    void retranslateUi(QDialog *patchesDialog)
    {
        patchesDialog->setWindowTitle(QApplication::translate("patchesDialog", "Qsynth: Channel Preset", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = m_bankListView->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("patchesDialog", "Bank", nullptr));
#ifndef QT_NO_TOOLTIP
        m_bankListView->setToolTip(QApplication::translate("patchesDialog", "Bank selector", nullptr));
#endif // QT_NO_TOOLTIP
        QTreeWidgetItem *___qtreewidgetitem1 = m_progListView->headerItem();
        ___qtreewidgetitem1->setText(1, QApplication::translate("patchesDialog", "Name", nullptr));
        ___qtreewidgetitem1->setText(0, QApplication::translate("patchesDialog", "Patch", nullptr));
#ifndef QT_NO_TOOLTIP
        m_progListView->setToolTip(QApplication::translate("patchesDialog", "Program selector", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        m_okButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        m_okButton->setText(QApplication::translate("patchesDialog", "OK", nullptr));
#ifndef QT_NO_TOOLTIP
        m_cancelButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        m_cancelButton->setText(QApplication::translate("patchesDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class patchesDialog: public Ui_patchesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATCHES_DIALOG_H
