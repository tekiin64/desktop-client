/********************************************************************************
** Form generated from reading UI file 'folderwizardsourcepage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOLDERWIZARDSOURCEPAGE_H
#define UI_FOLDERWIZARDSOURCEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FolderWizardSourcePage
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *localFolderLineEdit;
    QPushButton *localFolderChooseBtn;
    QLabel *warnLabel;

    void setupUi(QWidget *FolderWizardSourcePage)
    {
        if (FolderWizardSourcePage->objectName().isEmpty())
            FolderWizardSourcePage->setObjectName("FolderWizardSourcePage");
        FolderWizardSourcePage->resize(423, 174);
        FolderWizardSourcePage->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout_2 = new QGridLayout(FolderWizardSourcePage);
        gridLayout_2->setObjectName("gridLayout_2");
        verticalSpacer = new QSpacerItem(349, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 2, 0, 1, 1);

        groupBox = new QGroupBox(FolderWizardSourcePage);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        localFolderLineEdit = new QLineEdit(groupBox);
        localFolderLineEdit->setObjectName("localFolderLineEdit");

        horizontalLayout_2->addWidget(localFolderLineEdit);

        localFolderChooseBtn = new QPushButton(groupBox);
        localFolderChooseBtn->setObjectName("localFolderChooseBtn");

        horizontalLayout_2->addWidget(localFolderChooseBtn);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        warnLabel = new QLabel(FolderWizardSourcePage);
        warnLabel->setObjectName("warnLabel");
        warnLabel->setAutoFillBackground(true);
        warnLabel->setFrameShape(QFrame::StyledPanel);
        warnLabel->setTextFormat(Qt::RichText);
        warnLabel->setMargin(3);

        gridLayout_2->addWidget(warnLabel, 1, 0, 1, 1);


        retranslateUi(FolderWizardSourcePage);

        QMetaObject::connectSlotsByName(FolderWizardSourcePage);
    } // setupUi

    void retranslateUi(QWidget *FolderWizardSourcePage)
    {
        groupBox->setTitle(QCoreApplication::translate("FolderWizardSourcePage", "Pick a local folder on your computer to sync", nullptr));
        localFolderChooseBtn->setText(QCoreApplication::translate("FolderWizardSourcePage", "&Choose \342\200\246", nullptr));
        warnLabel->setText(QString());
        (void)FolderWizardSourcePage;
    } // retranslateUi

};

namespace Ui {
    class FolderWizardSourcePage: public Ui_FolderWizardSourcePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOLDERWIZARDSOURCEPAGE_H
