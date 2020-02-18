/********************************************************************************
** Form generated from reading UI file 'EffectSelectDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EFFECTSELECTDIALOG_H
#define UI_EFFECTSELECTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "RowTableView.h"

QT_BEGIN_NAMESPACE

class Ui_EffectSelectDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QLineEdit *filterEdit;
    RowTableView *pluginList;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EffectSelectDialog)
    {
        if (EffectSelectDialog->objectName().isEmpty())
            EffectSelectDialog->setObjectName(QString::fromUtf8("EffectSelectDialog"));
        EffectSelectDialog->resize(585, 550);
        EffectSelectDialog->setModal(true);
        verticalLayout_2 = new QVBoxLayout(EffectSelectDialog);
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        filterEdit = new QLineEdit(EffectSelectDialog);
        filterEdit->setObjectName(QString::fromUtf8("filterEdit"));

        verticalLayout_2->addWidget(filterEdit);

        pluginList = new RowTableView(EffectSelectDialog);
        pluginList->setObjectName(QString::fromUtf8("pluginList"));
        pluginList->setMinimumSize(QSize(500, 250));
        pluginList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        pluginList->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        pluginList->setSelectionBehavior(QAbstractItemView::SelectRows);
        pluginList->setSelectionMode(QAbstractItemView::SingleSelection);
        pluginList->setShowGrid(false);
        pluginList->setSortingEnabled(true);

        verticalLayout_2->addWidget(pluginList);

        scrollArea = new QScrollArea(EffectSelectDialog);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 497, 109));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);

        buttonBox = new QDialogButtonBox(EffectSelectDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(EffectSelectDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), EffectSelectDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(EffectSelectDialog);
    } // setupUi

    void retranslateUi(QDialog *EffectSelectDialog)
    {
        EffectSelectDialog->setWindowTitle(QApplication::translate("EffectSelectDialog", "Add effect", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EffectSelectDialog: public Ui_EffectSelectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EFFECTSELECTDIALOG_H
