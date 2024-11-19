/********************************************************************************
** Form generated from reading UI file 'networksettings.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETWORKSETTINGS_H
#define UI_NETWORKSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace OCC {

class Ui_NetworkSettings
{
public:
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer;
    QGroupBox *proxyGroupBox;
    QGridLayout *gridLayout;
    QRadioButton *systemProxyRadioButton;
    QHBoxLayout *horizontalLayout_7;
    QWidget *manualSettings;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_8;
    QComboBox *typeComboBox;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QLabel *hostLabel;
    QLineEdit *hostLineEdit;
    QLabel *label;
    QSpinBox *portSpinBox;
    QCheckBox *authRequiredcheckBox;
    QWidget *authWidgets;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *userLineEdit;
    QLineEdit *passwordLineEdit;
    QLabel *labelLocalhost;
    QSpacerItem *horizontalSpacer;
    QRadioButton *manualProxyRadioButton;
    QRadioButton *noProxyRadioButton;
    QSpacerItem *horizontalSpacer_2;
    QRadioButton *globalProxySettingsRadioButton;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *downloadBox;
    QGridLayout *gridLayout_2;
    QRadioButton *noDownloadLimitRadioButton;
    QHBoxLayout *horizontalLayout_3;
    QSpinBox *downloadSpinBox;
    QLabel *downloadSpinBoxLabel;
    QSpacerItem *verticalSpacer_2;
    QRadioButton *downloadLimitRadioButton;
    QRadioButton *autoDownloadLimitRadioButton;
    QRadioButton *globalDownloadSettingsRadioButton;
    QGroupBox *uploadBox;
    QGridLayout *gridLayout_4;
    QRadioButton *autoUploadLimitRadioButton;
    QSpacerItem *verticalSpacer_3;
    QRadioButton *uploadLimitRadioButton;
    QRadioButton *noUploadLimitRadioButton;
    QHBoxLayout *horizontalLayout_4;
    QSpinBox *uploadSpinBox;
    QLabel *uploadSpinBoxLabel;
    QRadioButton *globalUploadSettingsRadioButton;
    QButtonGroup *proxyButtonGroup;

    void setupUi(QWidget *OCC__NetworkSettings)
    {
        if (OCC__NetworkSettings->objectName().isEmpty())
            OCC__NetworkSettings->setObjectName("OCC__NetworkSettings");
        OCC__NetworkSettings->resize(524, 527);
        OCC__NetworkSettings->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout_3 = new QGridLayout(OCC__NetworkSettings);
        gridLayout_3->setObjectName("gridLayout_3");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 2, 0, 1, 1);

        proxyGroupBox = new QGroupBox(OCC__NetworkSettings);
        proxyGroupBox->setObjectName("proxyGroupBox");
        proxyGroupBox->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(proxyGroupBox->sizePolicy().hasHeightForWidth());
        proxyGroupBox->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(proxyGroupBox);
        gridLayout->setObjectName("gridLayout");
        systemProxyRadioButton = new QRadioButton(proxyGroupBox);
        proxyButtonGroup = new QButtonGroup(OCC__NetworkSettings);
        proxyButtonGroup->setObjectName("proxyButtonGroup");
        proxyButtonGroup->addButton(systemProxyRadioButton);
        systemProxyRadioButton->setObjectName("systemProxyRadioButton");

        gridLayout->addWidget(systemProxyRadioButton, 2, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        manualSettings = new QWidget(proxyGroupBox);
        manualSettings->setObjectName("manualSettings");
        manualSettings->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(manualSettings->sizePolicy().hasHeightForWidth());
        manualSettings->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(manualSettings);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(-1, -1, 0, -1);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        typeComboBox = new QComboBox(manualSettings);
        typeComboBox->setObjectName("typeComboBox");
        typeComboBox->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(typeComboBox->sizePolicy().hasHeightForWidth());
        typeComboBox->setSizePolicy(sizePolicy2);

        horizontalLayout_8->addWidget(typeComboBox);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        hostLabel = new QLabel(manualSettings);
        hostLabel->setObjectName("hostLabel");

        horizontalLayout->addWidget(hostLabel);

        hostLineEdit = new QLineEdit(manualSettings);
        hostLineEdit->setObjectName("hostLineEdit");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(hostLineEdit->sizePolicy().hasHeightForWidth());
        hostLineEdit->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(hostLineEdit);

        label = new QLabel(manualSettings);
        label->setObjectName("label");
        label->setText(QString::fromUtf8(":"));

        horizontalLayout->addWidget(label);

        portSpinBox = new QSpinBox(manualSettings);
        portSpinBox->setObjectName("portSpinBox");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(portSpinBox->sizePolicy().hasHeightForWidth());
        portSpinBox->setSizePolicy(sizePolicy4);
        portSpinBox->setMinimum(1);
        portSpinBox->setMaximum(65535);
        portSpinBox->setValue(8080);

        horizontalLayout->addWidget(portSpinBox);


        verticalLayout->addLayout(horizontalLayout);

        authRequiredcheckBox = new QCheckBox(manualSettings);
        authRequiredcheckBox->setObjectName("authRequiredcheckBox");
        authRequiredcheckBox->setEnabled(false);

        verticalLayout->addWidget(authRequiredcheckBox);

        authWidgets = new QWidget(manualSettings);
        authWidgets->setObjectName("authWidgets");
        authWidgets->setEnabled(true);
        horizontalLayout_2 = new QHBoxLayout(authWidgets);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        userLineEdit = new QLineEdit(authWidgets);
        userLineEdit->setObjectName("userLineEdit");
        userLineEdit->setEnabled(false);
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy5.setHorizontalStretch(1);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(userLineEdit->sizePolicy().hasHeightForWidth());
        userLineEdit->setSizePolicy(sizePolicy5);

        horizontalLayout_2->addWidget(userLineEdit);

        passwordLineEdit = new QLineEdit(authWidgets);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setEnabled(false);
        sizePolicy3.setHeightForWidth(passwordLineEdit->sizePolicy().hasHeightForWidth());
        passwordLineEdit->setSizePolicy(sizePolicy3);
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(passwordLineEdit);


        verticalLayout->addWidget(authWidgets);

        labelLocalhost = new QLabel(manualSettings);
        labelLocalhost->setObjectName("labelLocalhost");

        verticalLayout->addWidget(labelLocalhost);


        horizontalLayout_7->addWidget(manualSettings);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout_7, 4, 0, 1, 3);

        manualProxyRadioButton = new QRadioButton(proxyGroupBox);
        proxyButtonGroup->addButton(manualProxyRadioButton);
        manualProxyRadioButton->setObjectName("manualProxyRadioButton");

        gridLayout->addWidget(manualProxyRadioButton, 3, 0, 1, 1);

        noProxyRadioButton = new QRadioButton(proxyGroupBox);
        proxyButtonGroup->addButton(noProxyRadioButton);
        noProxyRadioButton->setObjectName("noProxyRadioButton");
        noProxyRadioButton->setChecked(true);

        gridLayout->addWidget(noProxyRadioButton, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 2, 1, 1);

        globalProxySettingsRadioButton = new QRadioButton(proxyGroupBox);
        proxyButtonGroup->addButton(globalProxySettingsRadioButton);
        globalProxySettingsRadioButton->setObjectName("globalProxySettingsRadioButton");

        gridLayout->addWidget(globalProxySettingsRadioButton, 0, 0, 1, 1);


        gridLayout_3->addWidget(proxyGroupBox, 0, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(-1, 0, -1, 0);
        downloadBox = new QGroupBox(OCC__NetworkSettings);
        downloadBox->setObjectName("downloadBox");
        QSizePolicy sizePolicy6(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(downloadBox->sizePolicy().hasHeightForWidth());
        downloadBox->setSizePolicy(sizePolicy6);
        downloadBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        gridLayout_2 = new QGridLayout(downloadBox);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setVerticalSpacing(6);
        gridLayout_2->setContentsMargins(-1, 9, -1, 0);
        noDownloadLimitRadioButton = new QRadioButton(downloadBox);
        noDownloadLimitRadioButton->setObjectName("noDownloadLimitRadioButton");
        noDownloadLimitRadioButton->setChecked(true);

        gridLayout_2->addWidget(noDownloadLimitRadioButton, 1, 0, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        downloadSpinBox = new QSpinBox(downloadBox);
        downloadSpinBox->setObjectName("downloadSpinBox");
        downloadSpinBox->setEnabled(true);
        downloadSpinBox->setMaximum(999999);
        downloadSpinBox->setValue(80);

        horizontalLayout_3->addWidget(downloadSpinBox);

        downloadSpinBoxLabel = new QLabel(downloadBox);
        downloadSpinBoxLabel->setObjectName("downloadSpinBoxLabel");
        QSizePolicy sizePolicy7(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(downloadSpinBoxLabel->sizePolicy().hasHeightForWidth());
        downloadSpinBoxLabel->setSizePolicy(sizePolicy7);

        horizontalLayout_3->addWidget(downloadSpinBoxLabel);


        gridLayout_2->addLayout(horizontalLayout_3, 5, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 6, 0, 1, 1);

        downloadLimitRadioButton = new QRadioButton(downloadBox);
        downloadLimitRadioButton->setObjectName("downloadLimitRadioButton");

        gridLayout_2->addWidget(downloadLimitRadioButton, 4, 0, 1, 1);

        autoDownloadLimitRadioButton = new QRadioButton(downloadBox);
        autoDownloadLimitRadioButton->setObjectName("autoDownloadLimitRadioButton");

        gridLayout_2->addWidget(autoDownloadLimitRadioButton, 2, 0, 1, 2);

        globalDownloadSettingsRadioButton = new QRadioButton(downloadBox);
        globalDownloadSettingsRadioButton->setObjectName("globalDownloadSettingsRadioButton");

        gridLayout_2->addWidget(globalDownloadSettingsRadioButton, 0, 0, 1, 1);


        horizontalLayout_5->addWidget(downloadBox);

        uploadBox = new QGroupBox(OCC__NetworkSettings);
        uploadBox->setObjectName("uploadBox");
        sizePolicy6.setHeightForWidth(uploadBox->sizePolicy().hasHeightForWidth());
        uploadBox->setSizePolicy(sizePolicy6);
        uploadBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        uploadBox->setFlat(false);
        gridLayout_4 = new QGridLayout(uploadBox);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setVerticalSpacing(6);
        gridLayout_4->setContentsMargins(-1, 9, -1, 0);
        autoUploadLimitRadioButton = new QRadioButton(uploadBox);
        autoUploadLimitRadioButton->setObjectName("autoUploadLimitRadioButton");

        gridLayout_4->addWidget(autoUploadLimitRadioButton, 2, 0, 1, 2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_4->addItem(verticalSpacer_3, 5, 0, 1, 1);

        uploadLimitRadioButton = new QRadioButton(uploadBox);
        uploadLimitRadioButton->setObjectName("uploadLimitRadioButton");

        gridLayout_4->addWidget(uploadLimitRadioButton, 3, 0, 1, 1);

        noUploadLimitRadioButton = new QRadioButton(uploadBox);
        noUploadLimitRadioButton->setObjectName("noUploadLimitRadioButton");
        noUploadLimitRadioButton->setChecked(true);

        gridLayout_4->addWidget(noUploadLimitRadioButton, 1, 0, 1, 2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        uploadSpinBox = new QSpinBox(uploadBox);
        uploadSpinBox->setObjectName("uploadSpinBox");
        uploadSpinBox->setEnabled(true);
        uploadSpinBox->setMinimum(1);
        uploadSpinBox->setMaximum(999999);
        uploadSpinBox->setValue(10);

        horizontalLayout_4->addWidget(uploadSpinBox);

        uploadSpinBoxLabel = new QLabel(uploadBox);
        uploadSpinBoxLabel->setObjectName("uploadSpinBoxLabel");
        sizePolicy7.setHeightForWidth(uploadSpinBoxLabel->sizePolicy().hasHeightForWidth());
        uploadSpinBoxLabel->setSizePolicy(sizePolicy7);

        horizontalLayout_4->addWidget(uploadSpinBoxLabel);


        gridLayout_4->addLayout(horizontalLayout_4, 4, 0, 1, 1);

        globalUploadSettingsRadioButton = new QRadioButton(uploadBox);
        globalUploadSettingsRadioButton->setObjectName("globalUploadSettingsRadioButton");

        gridLayout_4->addWidget(globalUploadSettingsRadioButton, 0, 0, 1, 1);

        autoUploadLimitRadioButton->raise();
        uploadLimitRadioButton->raise();
        noUploadLimitRadioButton->raise();
        globalUploadSettingsRadioButton->raise();

        horizontalLayout_5->addWidget(uploadBox);


        gridLayout_3->addLayout(horizontalLayout_5, 1, 0, 1, 1);


        retranslateUi(OCC__NetworkSettings);
        QObject::connect(downloadLimitRadioButton, &QRadioButton::toggled, downloadSpinBox, &QSpinBox::setVisible);
        QObject::connect(downloadLimitRadioButton, &QRadioButton::toggled, downloadSpinBoxLabel, &QLabel::setVisible);
        QObject::connect(uploadLimitRadioButton, &QRadioButton::toggled, uploadSpinBox, &QSpinBox::setVisible);
        QObject::connect(uploadLimitRadioButton, &QRadioButton::toggled, uploadSpinBoxLabel, &QLabel::setVisible);

        QMetaObject::connectSlotsByName(OCC__NetworkSettings);
    } // setupUi

    void retranslateUi(QWidget *OCC__NetworkSettings)
    {
        proxyGroupBox->setTitle(QCoreApplication::translate("OCC::NetworkSettings", "Proxy Settings", nullptr));
        systemProxyRadioButton->setText(QCoreApplication::translate("OCC::NetworkSettings", "Use system proxy", nullptr));
        hostLabel->setText(QCoreApplication::translate("OCC::NetworkSettings", "Host", nullptr));
        hostLineEdit->setText(QString());
        authRequiredcheckBox->setText(QCoreApplication::translate("OCC::NetworkSettings", "Proxy server requires authentication", nullptr));
        userLineEdit->setText(QString());
        passwordLineEdit->setText(QString());
        labelLocalhost->setText(QCoreApplication::translate("OCC::NetworkSettings", "Note: proxy settings have no effects for accounts on localhost", nullptr));
        manualProxyRadioButton->setText(QCoreApplication::translate("OCC::NetworkSettings", "Manually specify proxy", nullptr));
        noProxyRadioButton->setText(QCoreApplication::translate("OCC::NetworkSettings", "No proxy", nullptr));
        globalProxySettingsRadioButton->setText(QCoreApplication::translate("OCC::NetworkSettings", "Use global settings", nullptr));
        downloadBox->setTitle(QCoreApplication::translate("OCC::NetworkSettings", "Download Bandwidth", nullptr));
        noDownloadLimitRadioButton->setText(QCoreApplication::translate("OCC::NetworkSettings", "No limit", nullptr));
        downloadSpinBoxLabel->setText(QCoreApplication::translate("OCC::NetworkSettings", "KBytes/s", nullptr));
        downloadLimitRadioButton->setText(QCoreApplication::translate("OCC::NetworkSettings", "Limit to", nullptr));
#if QT_CONFIG(tooltip)
        autoDownloadLimitRadioButton->setToolTip(QCoreApplication::translate("OCC::NetworkSettings", "Limit to 3/4 of estimated bandwidth", nullptr));
#endif // QT_CONFIG(tooltip)
        autoDownloadLimitRadioButton->setText(QCoreApplication::translate("OCC::NetworkSettings", "Limit automatically", nullptr));
        globalDownloadSettingsRadioButton->setText(QCoreApplication::translate("OCC::NetworkSettings", "Use global settings", nullptr));
        uploadBox->setTitle(QCoreApplication::translate("OCC::NetworkSettings", "Upload Bandwidth", nullptr));
#if QT_CONFIG(tooltip)
        autoUploadLimitRadioButton->setToolTip(QCoreApplication::translate("OCC::NetworkSettings", "Limit to 3/4 of estimated bandwidth", nullptr));
#endif // QT_CONFIG(tooltip)
        autoUploadLimitRadioButton->setText(QCoreApplication::translate("OCC::NetworkSettings", "Limit automatically", nullptr));
        uploadLimitRadioButton->setText(QCoreApplication::translate("OCC::NetworkSettings", "Limit to", nullptr));
        noUploadLimitRadioButton->setText(QCoreApplication::translate("OCC::NetworkSettings", "No limit", nullptr));
        uploadSpinBoxLabel->setText(QCoreApplication::translate("OCC::NetworkSettings", "KBytes/s", nullptr));
        globalUploadSettingsRadioButton->setText(QCoreApplication::translate("OCC::NetworkSettings", "Use global settings", nullptr));
        (void)OCC__NetworkSettings;
    } // retranslateUi

};

} // namespace OCC

namespace OCC {
namespace Ui {
    class NetworkSettings: public Ui_NetworkSettings {};
} // namespace Ui
} // namespace OCC

#endif // UI_NETWORKSETTINGS_H
