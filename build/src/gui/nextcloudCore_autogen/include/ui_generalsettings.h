/********************************************************************************
** Form generated from reading UI file 'generalsettings.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERALSETTINGS_H
#define UI_GENERALSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace OCC {

class Ui_GeneralSettings
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *newFolderLimitCheckBox;
    QSpacerItem *horizontalSpacer;
    QSpinBox *newFolderLimitSpinBox;
    QLabel *label;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *existingFolderLimitCheckBox;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *stopExistingFolderNowBigSyncCheckBox;
    QHBoxLayout *horizontalLayout_8;
    QCheckBox *newExternalStorage;
    QHBoxLayout *horizontalLayout1;
    QCheckBox *moveFilesToTrashCheckBox;
    QHBoxLayout *horizontalLayout_10;
    QCheckBox *showInExplorerNavigationPaneCheckBox;
    QHBoxLayout *horizontalLayout_9;
    QCheckBox *crashreporterCheckBox;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *ignoredFilesButton;
    QPushButton *debugArchiveButton;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *aboutAndUpdatesGroupBox;
    QVBoxLayout *verticalLayout_3;
    QLabel *infoAndUpdatesLabel;
    QFrame *updatesContainer;
    QVBoxLayout *updatesLayout;
    QHBoxLayout *updatesLayout_1;
    QLabel *updateChannelLabel;
    QComboBox *updateChannel;
    QLabel *updateStateLabel;
    QPushButton *restartButton;
    QHBoxLayout *updatesLayout_2;
    QCheckBox *autoCheckForUpdatesCheckBox;
    QPushButton *updateButton;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *infoContainer;
    QPushButton *usageDocumentationButton;
    QPushButton *legalNoticeButton;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QGroupBox *generalGroupBox;
    QGridLayout *gridLayout_2;
    QCheckBox *monoIconsCheckBox;
    QCheckBox *autostartCheckBox;
    QCheckBox *serverNotificationsCheckBox;
    QCheckBox *callNotificationsCheckBox;

    void setupUi(QWidget *OCC__GeneralSettings)
    {
        if (OCC__GeneralSettings->objectName().isEmpty())
            OCC__GeneralSettings->setObjectName("OCC__GeneralSettings");
        OCC__GeneralSettings->resize(667, 663);
        OCC__GeneralSettings->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout_3 = new QGridLayout(OCC__GeneralSettings);
        gridLayout_3->setObjectName("gridLayout_3");
        groupBox = new QGroupBox(OCC__GeneralSettings);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        newFolderLimitCheckBox = new QCheckBox(groupBox);
        newFolderLimitCheckBox->setObjectName("newFolderLimitCheckBox");
        newFolderLimitCheckBox->setChecked(true);

        horizontalLayout_3->addWidget(newFolderLimitCheckBox);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        newFolderLimitSpinBox = new QSpinBox(groupBox);
        newFolderLimitSpinBox->setObjectName("newFolderLimitSpinBox");
        newFolderLimitSpinBox->setMaximum(999999);
        newFolderLimitSpinBox->setValue(99);

        horizontalLayout_3->addWidget(newFolderLimitSpinBox);

        label = new QLabel(groupBox);
        label->setObjectName("label");

        horizontalLayout_3->addWidget(label);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        existingFolderLimitCheckBox = new QCheckBox(groupBox);
        existingFolderLimitCheckBox->setObjectName("existingFolderLimitCheckBox");

        horizontalLayout_5->addWidget(existingFolderLimitCheckBox);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        stopExistingFolderNowBigSyncCheckBox = new QCheckBox(groupBox);
        stopExistingFolderNowBigSyncCheckBox->setObjectName("stopExistingFolderNowBigSyncCheckBox");

        horizontalLayout->addWidget(stopExistingFolderNowBigSyncCheckBox);


        verticalLayout_4->addLayout(horizontalLayout);


        verticalLayout->addLayout(verticalLayout_4);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        newExternalStorage = new QCheckBox(groupBox);
        newExternalStorage->setObjectName("newExternalStorage");

        horizontalLayout_8->addWidget(newExternalStorage);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout1 = new QHBoxLayout();
        horizontalLayout1->setObjectName("horizontalLayout1");
        moveFilesToTrashCheckBox = new QCheckBox(groupBox);
        moveFilesToTrashCheckBox->setObjectName("moveFilesToTrashCheckBox");

        horizontalLayout1->addWidget(moveFilesToTrashCheckBox);


        verticalLayout->addLayout(horizontalLayout1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        showInExplorerNavigationPaneCheckBox = new QCheckBox(groupBox);
        showInExplorerNavigationPaneCheckBox->setObjectName("showInExplorerNavigationPaneCheckBox");

        horizontalLayout_10->addWidget(showInExplorerNavigationPaneCheckBox);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        crashreporterCheckBox = new QCheckBox(groupBox);
        crashreporterCheckBox->setObjectName("crashreporterCheckBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(crashreporterCheckBox->sizePolicy().hasHeightForWidth());
        crashreporterCheckBox->setSizePolicy(sizePolicy);

        horizontalLayout_9->addWidget(crashreporterCheckBox);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        ignoredFilesButton = new QPushButton(groupBox);
        ignoredFilesButton->setObjectName("ignoredFilesButton");

        horizontalLayout_4->addWidget(ignoredFilesButton);

        debugArchiveButton = new QPushButton(groupBox);
        debugArchiveButton->setObjectName("debugArchiveButton");

        horizontalLayout_4->addWidget(debugArchiveButton);

        horizontalSpacer_4 = new QSpacerItem(555, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_4);


        gridLayout_3->addWidget(groupBox, 1, 0, 1, 1);

        aboutAndUpdatesGroupBox = new QGroupBox(OCC__GeneralSettings);
        aboutAndUpdatesGroupBox->setObjectName("aboutAndUpdatesGroupBox");
        verticalLayout_3 = new QVBoxLayout(aboutAndUpdatesGroupBox);
        verticalLayout_3->setObjectName("verticalLayout_3");
        infoAndUpdatesLabel = new QLabel(aboutAndUpdatesGroupBox);
        infoAndUpdatesLabel->setObjectName("infoAndUpdatesLabel");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(infoAndUpdatesLabel->sizePolicy().hasHeightForWidth());
        infoAndUpdatesLabel->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(infoAndUpdatesLabel);

        updatesContainer = new QFrame(aboutAndUpdatesGroupBox);
        updatesContainer->setObjectName("updatesContainer");
        updatesLayout = new QVBoxLayout(updatesContainer);
        updatesLayout->setObjectName("updatesLayout");
        updatesLayout_1 = new QHBoxLayout();
        updatesLayout_1->setObjectName("updatesLayout_1");
        updateChannelLabel = new QLabel(updatesContainer);
        updateChannelLabel->setObjectName("updateChannelLabel");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(updateChannelLabel->sizePolicy().hasHeightForWidth());
        updateChannelLabel->setSizePolicy(sizePolicy2);

        updatesLayout_1->addWidget(updateChannelLabel);

        updateChannel = new QComboBox(updatesContainer);
        updateChannel->setObjectName("updateChannel");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(updateChannel->sizePolicy().hasHeightForWidth());
        updateChannel->setSizePolicy(sizePolicy3);

        updatesLayout_1->addWidget(updateChannel);

        updateStateLabel = new QLabel(updatesContainer);
        updateStateLabel->setObjectName("updateStateLabel");
        updateStateLabel->setWordWrap(true);
        updateStateLabel->setOpenExternalLinks(true);

        updatesLayout_1->addWidget(updateStateLabel);

        restartButton = new QPushButton(updatesContainer);
        restartButton->setObjectName("restartButton");
        sizePolicy3.setHeightForWidth(restartButton->sizePolicy().hasHeightForWidth());
        restartButton->setSizePolicy(sizePolicy3);

        updatesLayout_1->addWidget(restartButton);


        updatesLayout->addLayout(updatesLayout_1);

        updatesLayout_2 = new QHBoxLayout();
        updatesLayout_2->setObjectName("updatesLayout_2");
        autoCheckForUpdatesCheckBox = new QCheckBox(updatesContainer);
        autoCheckForUpdatesCheckBox->setObjectName("autoCheckForUpdatesCheckBox");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(autoCheckForUpdatesCheckBox->sizePolicy().hasHeightForWidth());
        autoCheckForUpdatesCheckBox->setSizePolicy(sizePolicy4);
        autoCheckForUpdatesCheckBox->setChecked(true);

        updatesLayout_2->addWidget(autoCheckForUpdatesCheckBox);

        updateButton = new QPushButton(updatesContainer);
        updateButton->setObjectName("updateButton");
        sizePolicy3.setHeightForWidth(updateButton->sizePolicy().hasHeightForWidth());
        updateButton->setSizePolicy(sizePolicy3);

        updatesLayout_2->addWidget(updateButton);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        updatesLayout_2->addItem(horizontalSpacer_6);


        updatesLayout->addLayout(updatesLayout_2);


        verticalLayout_3->addWidget(updatesContainer);

        infoContainer = new QHBoxLayout();
        infoContainer->setObjectName("infoContainer");
        usageDocumentationButton = new QPushButton(aboutAndUpdatesGroupBox);
        usageDocumentationButton->setObjectName("usageDocumentationButton");

        infoContainer->addWidget(usageDocumentationButton);

        legalNoticeButton = new QPushButton(aboutAndUpdatesGroupBox);
        legalNoticeButton->setObjectName("legalNoticeButton");

        infoContainer->addWidget(legalNoticeButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        infoContainer->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(infoContainer);


        gridLayout_3->addWidget(aboutAndUpdatesGroupBox, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 4, 0, 1, 1);

        generalGroupBox = new QGroupBox(OCC__GeneralSettings);
        generalGroupBox->setObjectName("generalGroupBox");
        gridLayout_2 = new QGridLayout(generalGroupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        monoIconsCheckBox = new QCheckBox(generalGroupBox);
        monoIconsCheckBox->setObjectName("monoIconsCheckBox");

        gridLayout_2->addWidget(monoIconsCheckBox, 1, 0, 1, 1);

        autostartCheckBox = new QCheckBox(generalGroupBox);
        autostartCheckBox->setObjectName("autostartCheckBox");

        gridLayout_2->addWidget(autostartCheckBox, 0, 0, 1, 1);

        serverNotificationsCheckBox = new QCheckBox(generalGroupBox);
        serverNotificationsCheckBox->setObjectName("serverNotificationsCheckBox");

        gridLayout_2->addWidget(serverNotificationsCheckBox, 0, 1, 1, 1);

        callNotificationsCheckBox = new QCheckBox(generalGroupBox);
        callNotificationsCheckBox->setObjectName("callNotificationsCheckBox");

        gridLayout_2->addWidget(callNotificationsCheckBox, 1, 1, 1, 1);


        gridLayout_3->addWidget(generalGroupBox, 0, 0, 1, 1);

        QWidget::setTabOrder(autostartCheckBox, serverNotificationsCheckBox);
        QWidget::setTabOrder(serverNotificationsCheckBox, monoIconsCheckBox);
        QWidget::setTabOrder(monoIconsCheckBox, ignoredFilesButton);
        QWidget::setTabOrder(ignoredFilesButton, newFolderLimitCheckBox);
        QWidget::setTabOrder(newFolderLimitCheckBox, newFolderLimitSpinBox);
        QWidget::setTabOrder(newFolderLimitSpinBox, crashreporterCheckBox);
        QWidget::setTabOrder(crashreporterCheckBox, restartButton);

        retranslateUi(OCC__GeneralSettings);
        QObject::connect(newFolderLimitCheckBox, &QCheckBox::toggled, newFolderLimitSpinBox, &QSpinBox::setEnabled);

        QMetaObject::connectSlotsByName(OCC__GeneralSettings);
    } // setupUi

    void retranslateUi(QWidget *OCC__GeneralSettings)
    {
        groupBox->setTitle(QCoreApplication::translate("OCC::GeneralSettings", "Advanced", nullptr));
        newFolderLimitCheckBox->setText(QCoreApplication::translate("OCC::GeneralSettings", "Ask for confirmation before synchronizing new folders larger than", nullptr));
        label->setText(QCoreApplication::translate("OCC::GeneralSettings", "MB", nullptr));
        existingFolderLimitCheckBox->setText(QCoreApplication::translate("OCC::GeneralSettings", "Notify when synchronised folders grow larger than specified limit", nullptr));
        stopExistingFolderNowBigSyncCheckBox->setText(QCoreApplication::translate("OCC::GeneralSettings", "Automatically disable synchronisation of folders that overcome limit", nullptr));
        newExternalStorage->setText(QCoreApplication::translate("OCC::GeneralSettings", "Ask for confirmation before synchronizing external storages", nullptr));
        moveFilesToTrashCheckBox->setText(QCoreApplication::translate("OCC::GeneralSettings", "Move removed files to trash", nullptr));
        showInExplorerNavigationPaneCheckBox->setText(QCoreApplication::translate("OCC::GeneralSettings", "Show sync folders in &Explorer's navigation pane", nullptr));
        crashreporterCheckBox->setText(QCoreApplication::translate("OCC::GeneralSettings", "S&how crash reporter", nullptr));
        ignoredFilesButton->setText(QCoreApplication::translate("OCC::GeneralSettings", "Edit &Ignored Files", nullptr));
        debugArchiveButton->setText(QCoreApplication::translate("OCC::GeneralSettings", "Create Debug Archive", nullptr));
        aboutAndUpdatesGroupBox->setTitle(QCoreApplication::translate("OCC::GeneralSettings", "Info", nullptr));
        infoAndUpdatesLabel->setText(QCoreApplication::translate("OCC::GeneralSettings", "Desktop client x.x.x", nullptr));
        updateChannelLabel->setText(QCoreApplication::translate("OCC::GeneralSettings", "Update channel", nullptr));
        updateStateLabel->setText(QString());
        restartButton->setText(QCoreApplication::translate("OCC::GeneralSettings", "&Restart && Update", nullptr));
        autoCheckForUpdatesCheckBox->setText(QCoreApplication::translate("OCC::GeneralSettings", "&Automatically check for updates", nullptr));
        updateButton->setText(QCoreApplication::translate("OCC::GeneralSettings", "Check Now", nullptr));
        usageDocumentationButton->setText(QCoreApplication::translate("OCC::GeneralSettings", "Usage Documentation", nullptr));
        legalNoticeButton->setText(QCoreApplication::translate("OCC::GeneralSettings", "Legal Notice", nullptr));
        generalGroupBox->setTitle(QCoreApplication::translate("OCC::GeneralSettings", "General Settings", nullptr));
#if QT_CONFIG(tooltip)
        monoIconsCheckBox->setToolTip(QCoreApplication::translate("OCC::GeneralSettings", "For System Tray", nullptr));
#endif // QT_CONFIG(tooltip)
        monoIconsCheckBox->setText(QCoreApplication::translate("OCC::GeneralSettings", "Use &monochrome icons", nullptr));
        autostartCheckBox->setText(QCoreApplication::translate("OCC::GeneralSettings", "&Launch on system startup", nullptr));
        serverNotificationsCheckBox->setText(QCoreApplication::translate("OCC::GeneralSettings", "Show server &notifications", nullptr));
        callNotificationsCheckBox->setText(QCoreApplication::translate("OCC::GeneralSettings", "Show call notifications", nullptr));
        (void)OCC__GeneralSettings;
    } // retranslateUi

};

} // namespace OCC

namespace OCC {
namespace Ui {
    class GeneralSettings: public Ui_GeneralSettings {};
} // namespace Ui
} // namespace OCC

#endif // UI_GENERALSETTINGS_H
