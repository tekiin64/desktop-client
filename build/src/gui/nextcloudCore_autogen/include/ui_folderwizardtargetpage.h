/********************************************************************************
** Form generated from reading UI file 'folderwizardtargetpage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOLDERWIZARDTARGETPAGE_H
#define UI_FOLDERWIZARDTARGETPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FolderWizardTargetPage
{
public:
    QGridLayout *gridLayout_6;
    QLineEdit *folderEntry;
    QFrame *warnFrame;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout;
    QLabel *warnLabel;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *addFolderButton;
    QSpacerItem *verticalSpacer_2;
    QPushButton *refreshButton;
    QTreeWidget *folderTreeWidget;

    void setupUi(QWidget *FolderWizardTargetPage)
    {
        if (FolderWizardTargetPage->objectName().isEmpty())
            FolderWizardTargetPage->setObjectName("FolderWizardTargetPage");
        FolderWizardTargetPage->resize(520, 350);
        FolderWizardTargetPage->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout_6 = new QGridLayout(FolderWizardTargetPage);
        gridLayout_6->setObjectName("gridLayout_6");
        folderEntry = new QLineEdit(FolderWizardTargetPage);
        folderEntry->setObjectName("folderEntry");

        gridLayout_6->addWidget(folderEntry, 1, 0, 1, 1);

        warnFrame = new QFrame(FolderWizardTargetPage);
        warnFrame->setObjectName("warnFrame");
        warnFrame->setAutoFillBackground(true);
        warnFrame->setFrameShape(QFrame::NoFrame);
        warnFrame->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(warnFrame);
        gridLayout_5->setObjectName("gridLayout_5");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        warnLabel = new QLabel(warnFrame);
        warnLabel->setObjectName("warnLabel");
        warnLabel->setAutoFillBackground(true);
        warnLabel->setFrameShape(QFrame::NoFrame);
        warnLabel->setFrameShadow(QFrame::Plain);
        warnLabel->setText(QString::fromUtf8("TextLabel"));
        warnLabel->setTextFormat(Qt::RichText);
        warnLabel->setWordWrap(true);
        warnLabel->setMargin(3);

        horizontalLayout->addWidget(warnLabel);


        gridLayout_5->addLayout(horizontalLayout, 0, 0, 1, 1);


        gridLayout_6->addWidget(warnFrame, 2, 0, 1, 1);

        groupBox = new QGroupBox(FolderWizardTargetPage);
        groupBox->setObjectName("groupBox");
        groupBox->setFlat(true);
        groupBox->setCheckable(false);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        addFolderButton = new QPushButton(groupBox);
        addFolderButton->setObjectName("addFolderButton");

        gridLayout->addWidget(addFolderButton, 1, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 1, 1, 1);

        refreshButton = new QPushButton(groupBox);
        refreshButton->setObjectName("refreshButton");

        gridLayout->addWidget(refreshButton, 2, 1, 1, 1);

        folderTreeWidget = new QTreeWidget(groupBox);
        folderTreeWidget->setObjectName("folderTreeWidget");
        folderTreeWidget->setSortingEnabled(true);
        folderTreeWidget->setHeaderHidden(true);

        gridLayout->addWidget(folderTreeWidget, 0, 0, 4, 1);


        gridLayout_6->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(FolderWizardTargetPage);

        QMetaObject::connectSlotsByName(FolderWizardTargetPage);
    } // setupUi

    void retranslateUi(QWidget *FolderWizardTargetPage)
    {
        groupBox->setTitle(QCoreApplication::translate("FolderWizardTargetPage", "Select a remote destination folder", nullptr));
        addFolderButton->setText(QCoreApplication::translate("FolderWizardTargetPage", "Create folder", nullptr));
        refreshButton->setText(QCoreApplication::translate("FolderWizardTargetPage", "Refresh", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = folderTreeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("FolderWizardTargetPage", "Folders", nullptr));
        (void)FolderWizardTargetPage;
    } // retranslateUi

};

namespace Ui {
    class FolderWizardTargetPage: public Ui_FolderWizardTargetPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOLDERWIZARDTARGETPAGE_H
