/********************************************************************************
** Form generated from reading UI file 'export_project.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORT_PROJECT_H
#define UI_EXPORT_PROJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExportProjectDialog
{
public:
    QVBoxLayout *vboxLayout;
    QCheckBox *exportLoopCB;
    QCheckBox *renderMarkersCB;
    QWidget *loopRepeatWidget;
    QHBoxLayout *loopRepeatHL;
    QLabel *labelLoopRepeat;
    QSpinBox *loopCountSB;
    QHBoxLayout *hboxLayout;
    QGroupBox *outputGroupBox;
    QVBoxLayout *vboxLayout1;
    QLabel *label;
    QComboBox *fileFormatCB;
    QWidget *sampleRateWidget;
    QVBoxLayout *verticalLayout;
    QLabel *labelSampleRate;
    QComboBox *samplerateCB;
    QWidget *depthWidget;
    QVBoxLayout *vboxLayout2;
    QLabel *labelBitDepth;
    QComboBox *depthCB;
    QWidget *stereoModeWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelStereoMode_3;
    QComboBox *stereoModeComboBox;
    QWidget *compressionWidget;
    QVBoxLayout *_2;
    QLabel *labelCompLevel;
    QComboBox *compLevelCB;
    QWidget *bitrateWidget;
    QVBoxLayout *vboxLayout3;
    QLabel *labelBitRate;
    QComboBox *bitrateCB;
    QCheckBox *checkBoxVariableBitRate;
    QSpacerItem *spacerItem;
    QGroupBox *qualityGroupBox;
    QVBoxLayout *vboxLayout4;
    QLabel *label_2;
    QComboBox *interpolationCB;
    QLabel *label_4;
    QComboBox *oversamplingCB;
    QSpacerItem *spacerItem1;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem2;
    QPushButton *startButton;
    QPushButton *cancelButton;
    QProgressBar *progressBar;

    void setupUi(QDialog *ExportProjectDialog)
    {
        if (ExportProjectDialog->objectName().isEmpty())
            ExportProjectDialog->setObjectName(QString::fromUtf8("ExportProjectDialog"));
        ExportProjectDialog->resize(379, 400);
        ExportProjectDialog->setMinimumSize(QSize(379, 400));
        ExportProjectDialog->setMaximumSize(QSize(379, 400));
        vboxLayout = new QVBoxLayout(ExportProjectDialog);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        exportLoopCB = new QCheckBox(ExportProjectDialog);
        exportLoopCB->setObjectName(QString::fromUtf8("exportLoopCB"));

        vboxLayout->addWidget(exportLoopCB);

        renderMarkersCB = new QCheckBox(ExportProjectDialog);
        renderMarkersCB->setObjectName(QString::fromUtf8("renderMarkersCB"));

        vboxLayout->addWidget(renderMarkersCB);

        loopRepeatWidget = new QWidget(ExportProjectDialog);
        loopRepeatWidget->setObjectName(QString::fromUtf8("loopRepeatWidget"));
        loopRepeatHL = new QHBoxLayout(loopRepeatWidget);
        loopRepeatHL->setObjectName(QString::fromUtf8("loopRepeatHL"));
        loopRepeatHL->setContentsMargins(0, 0, 0, 0);
        labelLoopRepeat = new QLabel(loopRepeatWidget);
        labelLoopRepeat->setObjectName(QString::fromUtf8("labelLoopRepeat"));

        loopRepeatHL->addWidget(labelLoopRepeat);

        loopCountSB = new QSpinBox(loopRepeatWidget);
        loopCountSB->setObjectName(QString::fromUtf8("loopCountSB"));
        loopCountSB->setMinimum(1);
        loopCountSB->setMaximum(99);
        loopCountSB->setValue(1);

        loopRepeatHL->addWidget(loopCountSB);


        vboxLayout->addWidget(loopRepeatWidget);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        outputGroupBox = new QGroupBox(ExportProjectDialog);
        outputGroupBox->setObjectName(QString::fromUtf8("outputGroupBox"));
        vboxLayout1 = new QVBoxLayout(outputGroupBox);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        label = new QLabel(outputGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        vboxLayout1->addWidget(label);

        fileFormatCB = new QComboBox(outputGroupBox);
        fileFormatCB->setObjectName(QString::fromUtf8("fileFormatCB"));

        vboxLayout1->addWidget(fileFormatCB);

        sampleRateWidget = new QWidget(outputGroupBox);
        sampleRateWidget->setObjectName(QString::fromUtf8("sampleRateWidget"));
        verticalLayout = new QVBoxLayout(sampleRateWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelSampleRate = new QLabel(sampleRateWidget);
        labelSampleRate->setObjectName(QString::fromUtf8("labelSampleRate"));

        verticalLayout->addWidget(labelSampleRate);

        samplerateCB = new QComboBox(sampleRateWidget);
        samplerateCB->addItem(QString());
        samplerateCB->addItem(QString());
        samplerateCB->addItem(QString());
        samplerateCB->addItem(QString());
        samplerateCB->addItem(QString());
        samplerateCB->setObjectName(QString::fromUtf8("samplerateCB"));

        verticalLayout->addWidget(samplerateCB);


        vboxLayout1->addWidget(sampleRateWidget);

        depthWidget = new QWidget(outputGroupBox);
        depthWidget->setObjectName(QString::fromUtf8("depthWidget"));
        vboxLayout2 = new QVBoxLayout(depthWidget);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        labelBitDepth = new QLabel(depthWidget);
        labelBitDepth->setObjectName(QString::fromUtf8("labelBitDepth"));

        vboxLayout2->addWidget(labelBitDepth);

        depthCB = new QComboBox(depthWidget);
        depthCB->addItem(QString());
        depthCB->addItem(QString());
        depthCB->addItem(QString());
        depthCB->setObjectName(QString::fromUtf8("depthCB"));

        vboxLayout2->addWidget(depthCB);


        vboxLayout1->addWidget(depthWidget);

        stereoModeWidget = new QWidget(outputGroupBox);
        stereoModeWidget->setObjectName(QString::fromUtf8("stereoModeWidget"));
        verticalLayout_4 = new QVBoxLayout(stereoModeWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        labelStereoMode_3 = new QLabel(stereoModeWidget);
        labelStereoMode_3->setObjectName(QString::fromUtf8("labelStereoMode_3"));

        verticalLayout_4->addWidget(labelStereoMode_3);

        stereoModeComboBox = new QComboBox(stereoModeWidget);
        stereoModeComboBox->addItem(QString());
        stereoModeComboBox->addItem(QString());
        stereoModeComboBox->addItem(QString());
        stereoModeComboBox->setObjectName(QString::fromUtf8("stereoModeComboBox"));

        verticalLayout_4->addWidget(stereoModeComboBox);


        vboxLayout1->addWidget(stereoModeWidget);

        compressionWidget = new QWidget(outputGroupBox);
        compressionWidget->setObjectName(QString::fromUtf8("compressionWidget"));
        _2 = new QVBoxLayout(compressionWidget);
        _2->setObjectName(QString::fromUtf8("_2"));
        _2->setContentsMargins(0, 0, 0, 0);
        labelCompLevel = new QLabel(compressionWidget);
        labelCompLevel->setObjectName(QString::fromUtf8("labelCompLevel"));

        _2->addWidget(labelCompLevel);

        compLevelCB = new QComboBox(compressionWidget);
        compLevelCB->setObjectName(QString::fromUtf8("compLevelCB"));

        _2->addWidget(compLevelCB);


        vboxLayout1->addWidget(compressionWidget);

        bitrateWidget = new QWidget(outputGroupBox);
        bitrateWidget->setObjectName(QString::fromUtf8("bitrateWidget"));
        vboxLayout3 = new QVBoxLayout(bitrateWidget);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        vboxLayout3->setContentsMargins(0, 0, 0, 0);
        labelBitRate = new QLabel(bitrateWidget);
        labelBitRate->setObjectName(QString::fromUtf8("labelBitRate"));

        vboxLayout3->addWidget(labelBitRate);

        bitrateCB = new QComboBox(bitrateWidget);
        bitrateCB->addItem(QString());
        bitrateCB->addItem(QString());
        bitrateCB->addItem(QString());
        bitrateCB->addItem(QString());
        bitrateCB->addItem(QString());
        bitrateCB->addItem(QString());
        bitrateCB->setObjectName(QString::fromUtf8("bitrateCB"));

        vboxLayout3->addWidget(bitrateCB);

        checkBoxVariableBitRate = new QCheckBox(bitrateWidget);
        checkBoxVariableBitRate->setObjectName(QString::fromUtf8("checkBoxVariableBitRate"));

        vboxLayout3->addWidget(checkBoxVariableBitRate);


        vboxLayout1->addWidget(bitrateWidget);

        spacerItem = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem);


        hboxLayout->addWidget(outputGroupBox);

        qualityGroupBox = new QGroupBox(ExportProjectDialog);
        qualityGroupBox->setObjectName(QString::fromUtf8("qualityGroupBox"));
        vboxLayout4 = new QVBoxLayout(qualityGroupBox);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        label_2 = new QLabel(qualityGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        vboxLayout4->addWidget(label_2);

        interpolationCB = new QComboBox(qualityGroupBox);
        interpolationCB->addItem(QString());
        interpolationCB->addItem(QString());
        interpolationCB->addItem(QString());
        interpolationCB->addItem(QString());
        interpolationCB->setObjectName(QString::fromUtf8("interpolationCB"));

        vboxLayout4->addWidget(interpolationCB);

        label_4 = new QLabel(qualityGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        vboxLayout4->addWidget(label_4);

        oversamplingCB = new QComboBox(qualityGroupBox);
        oversamplingCB->addItem(QString());
        oversamplingCB->addItem(QString());
        oversamplingCB->addItem(QString());
        oversamplingCB->addItem(QString());
        oversamplingCB->setObjectName(QString::fromUtf8("oversamplingCB"));

        vboxLayout4->addWidget(oversamplingCB);

        spacerItem1 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout4->addItem(spacerItem1);


        hboxLayout->addWidget(qualityGroupBox);


        vboxLayout->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        spacerItem2 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem2);

        startButton = new QPushButton(ExportProjectDialog);
        startButton->setObjectName(QString::fromUtf8("startButton"));

        hboxLayout1->addWidget(startButton);

        cancelButton = new QPushButton(ExportProjectDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout1->addWidget(cancelButton);


        vboxLayout->addLayout(hboxLayout1);

        progressBar = new QProgressBar(ExportProjectDialog);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setEnabled(false);
        progressBar->setValue(0);

        vboxLayout->addWidget(progressBar);


        retranslateUi(ExportProjectDialog);
        QObject::connect(cancelButton, SIGNAL(clicked()), ExportProjectDialog, SLOT(reject()));
        QObject::connect(fileFormatCB, SIGNAL(currentIndexChanged(int)), ExportProjectDialog, SLOT(onFileFormatChanged(int)));

        depthCB->setCurrentIndex(1);
        stereoModeComboBox->setCurrentIndex(1);
        compLevelCB->setCurrentIndex(-1);
        bitrateCB->setCurrentIndex(2);
        interpolationCB->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(ExportProjectDialog);
    } // setupUi

    void retranslateUi(QDialog *ExportProjectDialog)
    {
        ExportProjectDialog->setWindowTitle(QApplication::translate("ExportProjectDialog", "Export project", nullptr));
        exportLoopCB->setText(QApplication::translate("ExportProjectDialog", "Export as loop (remove extra bar)", nullptr));
        renderMarkersCB->setText(QApplication::translate("ExportProjectDialog", "Export between loop markers", nullptr));
        labelLoopRepeat->setText(QApplication::translate("ExportProjectDialog", "Render Looped Section:", nullptr));
        loopCountSB->setSuffix(QApplication::translate("ExportProjectDialog", " time(s)", nullptr));
        outputGroupBox->setTitle(QApplication::translate("ExportProjectDialog", "File format settings", nullptr));
        label->setText(QApplication::translate("ExportProjectDialog", "File format:", nullptr));
        labelSampleRate->setText(QApplication::translate("ExportProjectDialog", "Sampling rate:", nullptr));
        samplerateCB->setItemText(0, QApplication::translate("ExportProjectDialog", "44100 Hz", nullptr));
        samplerateCB->setItemText(1, QApplication::translate("ExportProjectDialog", "48000 Hz", nullptr));
        samplerateCB->setItemText(2, QApplication::translate("ExportProjectDialog", "88200 Hz", nullptr));
        samplerateCB->setItemText(3, QApplication::translate("ExportProjectDialog", "96000 Hz", nullptr));
        samplerateCB->setItemText(4, QApplication::translate("ExportProjectDialog", "192000 Hz", nullptr));

        labelBitDepth->setText(QApplication::translate("ExportProjectDialog", "Bit depth:", nullptr));
        depthCB->setItemText(0, QApplication::translate("ExportProjectDialog", "16 Bit integer", nullptr));
        depthCB->setItemText(1, QApplication::translate("ExportProjectDialog", "24 Bit integer", nullptr));
        depthCB->setItemText(2, QApplication::translate("ExportProjectDialog", "32 Bit float", nullptr));

        labelStereoMode_3->setText(QApplication::translate("ExportProjectDialog", "Stereo mode:", nullptr));
        stereoModeComboBox->setItemText(0, QApplication::translate("ExportProjectDialog", "Mono", nullptr));
        stereoModeComboBox->setItemText(1, QApplication::translate("ExportProjectDialog", "Stereo", nullptr));
        stereoModeComboBox->setItemText(2, QApplication::translate("ExportProjectDialog", "Joint stereo", nullptr));

        labelCompLevel->setText(QApplication::translate("ExportProjectDialog", "Compression level:", nullptr));
        labelBitRate->setText(QApplication::translate("ExportProjectDialog", "Bitrate:", nullptr));
        bitrateCB->setItemText(0, QApplication::translate("ExportProjectDialog", "64 KBit/s", nullptr));
        bitrateCB->setItemText(1, QApplication::translate("ExportProjectDialog", "128 KBit/s", nullptr));
        bitrateCB->setItemText(2, QApplication::translate("ExportProjectDialog", "160 KBit/s", nullptr));
        bitrateCB->setItemText(3, QApplication::translate("ExportProjectDialog", "192 KBit/s", nullptr));
        bitrateCB->setItemText(4, QApplication::translate("ExportProjectDialog", "256 KBit/s", nullptr));
        bitrateCB->setItemText(5, QApplication::translate("ExportProjectDialog", "320 KBit/s", nullptr));

        checkBoxVariableBitRate->setText(QApplication::translate("ExportProjectDialog", "Use variable bitrate", nullptr));
        qualityGroupBox->setTitle(QApplication::translate("ExportProjectDialog", "Quality settings", nullptr));
        label_2->setText(QApplication::translate("ExportProjectDialog", "Interpolation:", nullptr));
        interpolationCB->setItemText(0, QApplication::translate("ExportProjectDialog", "Zero order hold", nullptr));
        interpolationCB->setItemText(1, QApplication::translate("ExportProjectDialog", "Sinc worst (fastest)", nullptr));
        interpolationCB->setItemText(2, QApplication::translate("ExportProjectDialog", "Sinc medium (recommended)", nullptr));
        interpolationCB->setItemText(3, QApplication::translate("ExportProjectDialog", "Sinc best (slowest)", nullptr));

        label_4->setText(QApplication::translate("ExportProjectDialog", "Oversampling:", nullptr));
        oversamplingCB->setItemText(0, QApplication::translate("ExportProjectDialog", "1x (None)", nullptr));
        oversamplingCB->setItemText(1, QApplication::translate("ExportProjectDialog", "2x", nullptr));
        oversamplingCB->setItemText(2, QApplication::translate("ExportProjectDialog", "4x", nullptr));
        oversamplingCB->setItemText(3, QApplication::translate("ExportProjectDialog", "8x", nullptr));

        startButton->setText(QApplication::translate("ExportProjectDialog", "Start", nullptr));
        cancelButton->setText(QApplication::translate("ExportProjectDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExportProjectDialog: public Ui_ExportProjectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORT_PROJECT_H
