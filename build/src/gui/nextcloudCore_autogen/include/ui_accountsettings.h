/********************************************************************************
** Form generated from reading UI file 'accountsettings.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTSETTINGS_H
#define UI_ACCOUNTSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "folderstatusview.h"
#include "kmessagewidget.h"
#include "sslbutton.h"

namespace OCC {

class Ui_AccountSettings
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *storageGroupBox;
    QLabel *quotaInfoLabel;
    QProgressBar *quotaProgressBar;
    QWidget *selectiveSyncStatus;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *selectiveSyncLabel;
    QWidget *selectiveSyncButtons;
    QHBoxLayout *horizontalLayout;
    QPushButton *selectiveSyncCancel;
    QPushButton *selectiveSyncApply;
    QWidget *accountStatus;
    QGridLayout *gridLayout_2;
    SslButton *sslButton;
    QLabel *connectLabel;
    KMessageWidget *encryptionMessage;
    QWidget *bigFolderUi;
    QVBoxLayout *verticalLayout;
    QLabel *selectiveSyncNotification;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *bigFolderSyncAll;
    QPushButton *bigFolderSyncNone;
    QPushButton *bigFolderApply;
    QTabWidget *tabWidget;
    QWidget *standardSyncTab;
    QVBoxLayout *verticalLayout_4;
    OCC::FolderStatusView *_folderList;
    QWidget *fileProviderTab;
    QWidget *connectionSettingsTab;

    void setupUi(QWidget *OCC__AccountSettings)
    {
        if (OCC__AccountSettings->objectName().isEmpty())
            OCC__AccountSettings->setObjectName("OCC__AccountSettings");
        OCC__AccountSettings->resize(1028, 871);
        OCC__AccountSettings->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(OCC__AccountSettings);
        gridLayout->setObjectName("gridLayout");
        storageGroupBox = new QHBoxLayout();
        storageGroupBox->setObjectName("storageGroupBox");
        quotaInfoLabel = new QLabel(OCC__AccountSettings);
        quotaInfoLabel->setObjectName("quotaInfoLabel");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(quotaInfoLabel->sizePolicy().hasHeightForWidth());
        quotaInfoLabel->setSizePolicy(sizePolicy);
        quotaInfoLabel->setTextFormat(Qt::PlainText);
        quotaInfoLabel->setWordWrap(false);

        storageGroupBox->addWidget(quotaInfoLabel);

        quotaProgressBar = new QProgressBar(OCC__AccountSettings);
        quotaProgressBar->setObjectName("quotaProgressBar");
        quotaProgressBar->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(quotaProgressBar->sizePolicy().hasHeightForWidth());
        quotaProgressBar->setSizePolicy(sizePolicy1);
        quotaProgressBar->setMaximumSize(QSize(16777215, 7));
        quotaProgressBar->setMaximum(100);
        quotaProgressBar->setValue(-1);
        quotaProgressBar->setTextVisible(false);

        storageGroupBox->addWidget(quotaProgressBar);


        gridLayout->addLayout(storageGroupBox, 2, 0, 1, 1);

        selectiveSyncStatus = new QWidget(OCC__AccountSettings);
        selectiveSyncStatus->setObjectName("selectiveSyncStatus");
        horizontalLayout_3 = new QHBoxLayout(selectiveSyncStatus);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        selectiveSyncLabel = new QLabel(selectiveSyncStatus);
        selectiveSyncLabel->setObjectName("selectiveSyncLabel");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(selectiveSyncLabel->sizePolicy().hasHeightForWidth());
        selectiveSyncLabel->setSizePolicy(sizePolicy2);
        selectiveSyncLabel->setTextFormat(Qt::RichText);
        selectiveSyncLabel->setWordWrap(true);
        selectiveSyncLabel->setOpenExternalLinks(true);

        verticalLayout_3->addWidget(selectiveSyncLabel);


        horizontalLayout_3->addLayout(verticalLayout_3);

        selectiveSyncButtons = new QWidget(selectiveSyncStatus);
        selectiveSyncButtons->setObjectName("selectiveSyncButtons");
        horizontalLayout = new QHBoxLayout(selectiveSyncButtons);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        selectiveSyncCancel = new QPushButton(selectiveSyncButtons);
        selectiveSyncCancel->setObjectName("selectiveSyncCancel");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(selectiveSyncCancel->sizePolicy().hasHeightForWidth());
        selectiveSyncCancel->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(selectiveSyncCancel);

        selectiveSyncApply = new QPushButton(selectiveSyncButtons);
        selectiveSyncApply->setObjectName("selectiveSyncApply");
        sizePolicy3.setHeightForWidth(selectiveSyncApply->sizePolicy().hasHeightForWidth());
        selectiveSyncApply->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(selectiveSyncApply);


        horizontalLayout_3->addWidget(selectiveSyncButtons);


        gridLayout->addWidget(selectiveSyncStatus, 4, 0, 1, 1);

        accountStatus = new QWidget(OCC__AccountSettings);
        accountStatus->setObjectName("accountStatus");
        gridLayout_2 = new QGridLayout(accountStatus);
        gridLayout_2->setObjectName("gridLayout_2");
        sslButton = new SslButton(accountStatus);
        sslButton->setObjectName("sslButton");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(sslButton->sizePolicy().hasHeightForWidth());
        sslButton->setSizePolicy(sizePolicy4);

        gridLayout_2->addWidget(sslButton, 0, 0, 1, 1);

        connectLabel = new QLabel(accountStatus);
        connectLabel->setObjectName("connectLabel");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(connectLabel->sizePolicy().hasHeightForWidth());
        connectLabel->setSizePolicy(sizePolicy5);
        connectLabel->setTextFormat(Qt::RichText);
        connectLabel->setWordWrap(true);
        connectLabel->setOpenExternalLinks(true);

        gridLayout_2->addWidget(connectLabel, 0, 1, 1, 1);


        gridLayout->addWidget(accountStatus, 0, 0, 1, 1);

        encryptionMessage = new KMessageWidget(OCC__AccountSettings);
        encryptionMessage->setObjectName("encryptionMessage");

        gridLayout->addWidget(encryptionMessage, 1, 0, 1, 1);

        bigFolderUi = new QWidget(OCC__AccountSettings);
        bigFolderUi->setObjectName("bigFolderUi");
        verticalLayout = new QVBoxLayout(bigFolderUi);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        selectiveSyncNotification = new QLabel(bigFolderUi);
        selectiveSyncNotification->setObjectName("selectiveSyncNotification");
        selectiveSyncNotification->setStyleSheet(QString::fromUtf8("color: red"));
        selectiveSyncNotification->setWordWrap(true);

        verticalLayout->addWidget(selectiveSyncNotification);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        bigFolderSyncAll = new QPushButton(bigFolderUi);
        bigFolderSyncAll->setObjectName("bigFolderSyncAll");

        horizontalLayout_2->addWidget(bigFolderSyncAll);

        bigFolderSyncNone = new QPushButton(bigFolderUi);
        bigFolderSyncNone->setObjectName("bigFolderSyncNone");

        horizontalLayout_2->addWidget(bigFolderSyncNone);

        bigFolderApply = new QPushButton(bigFolderUi);
        bigFolderApply->setObjectName("bigFolderApply");

        horizontalLayout_2->addWidget(bigFolderApply);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout->addWidget(bigFolderUi, 5, 0, 1, 1);

        tabWidget = new QTabWidget(OCC__AccountSettings);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setTabShape(QTabWidget::Rounded);
        standardSyncTab = new QWidget();
        standardSyncTab->setObjectName("standardSyncTab");
        verticalLayout_4 = new QVBoxLayout(standardSyncTab);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        _folderList = new OCC::FolderStatusView(standardSyncTab);
        _folderList->setObjectName("_folderList");
        QSizePolicy sizePolicy6(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(_folderList->sizePolicy().hasHeightForWidth());
        _folderList->setSizePolicy(sizePolicy6);
        _folderList->setContextMenuPolicy(Qt::CustomContextMenu);
        _folderList->setAutoFillBackground(false);
        _folderList->setFrameShape(QFrame::Shape::NoFrame);
        _folderList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        _folderList->setAnimated(true);

        verticalLayout_4->addWidget(_folderList);

        tabWidget->addTab(standardSyncTab, QString());
        fileProviderTab = new QWidget();
        fileProviderTab->setObjectName("fileProviderTab");
        tabWidget->addTab(fileProviderTab, QString());
        connectionSettingsTab = new QWidget();
        connectionSettingsTab->setObjectName("connectionSettingsTab");
        tabWidget->addTab(connectionSettingsTab, QString());

        gridLayout->addWidget(tabWidget, 3, 0, 1, 1);


        retranslateUi(OCC__AccountSettings);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(OCC__AccountSettings);
    } // setupUi

    void retranslateUi(QWidget *OCC__AccountSettings)
    {
#if QT_CONFIG(tooltip)
        quotaInfoLabel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        quotaInfoLabel->setText(QCoreApplication::translate("OCC::AccountSettings", "Storage space: \342\200\246", nullptr));
        selectiveSyncLabel->setText(QCoreApplication::translate("OCC::AccountSettings", "Unchecked folders will be <b>removed</b> from your local file system and will not be synchronized to this computer anymore", nullptr));
        selectiveSyncCancel->setText(QCoreApplication::translate("OCC::AccountSettings", "Cancel", nullptr));
        selectiveSyncApply->setText(QCoreApplication::translate("OCC::AccountSettings", "Apply", nullptr));
        sslButton->setText(QString());
        connectLabel->setText(QCoreApplication::translate("OCC::AccountSettings", "Connected with <server> as <user>", nullptr));
        selectiveSyncNotification->setText(QString());
        bigFolderSyncAll->setText(QCoreApplication::translate("OCC::AccountSettings", "Synchronize all", nullptr));
        bigFolderSyncNone->setText(QCoreApplication::translate("OCC::AccountSettings", "Synchronize none", nullptr));
        bigFolderApply->setText(QCoreApplication::translate("OCC::AccountSettings", "Apply manual changes", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(standardSyncTab), QCoreApplication::translate("OCC::AccountSettings", "Standard file sync", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(fileProviderTab), QCoreApplication::translate("OCC::AccountSettings", "Virtual file sync", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(connectionSettingsTab), QCoreApplication::translate("OCC::AccountSettings", "Connection settings", nullptr));
        (void)OCC__AccountSettings;
    } // retranslateUi

};

} // namespace OCC

namespace OCC {
namespace Ui {
    class AccountSettings: public Ui_AccountSettings {};
} // namespace Ui
} // namespace OCC

#endif // UI_ACCOUNTSETTINGS_H
