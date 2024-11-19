/********************************************************************************
** Form generated from reading UI file 'owncloudsetupnocredspage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OWNCLOUDSETUPNOCREDSPAGE_H
#define UI_OWNCLOUDSETUPNOCREDSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "wizard/postfixlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_OwncloudSetupPage
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *topLabel;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QLabel *logoLabel;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    QWidget *login;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *serverBox;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_7;
    QLabel *serverAddressLabel;
    QSpacerItem *horizontalSpacer_8;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_5;
    OCC::PostfixLineEdit *leUrl;
    QLabel *serverAddressDescriptionLabel;
    QSpacerItem *horizontalSpacer;
    QLabel *errorLabel;
    QHBoxLayout *progressLayout;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QLabel *bottomLabel;
    QHBoxLayout *horizontalLayout_3;

    void setupUi(QWidget *OwncloudSetupPage)
    {
        if (OwncloudSetupPage->objectName().isEmpty())
            OwncloudSetupPage->setObjectName("OwncloudSetupPage");
        OwncloudSetupPage->resize(556, 489);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OwncloudSetupPage->sizePolicy().hasHeightForWidth());
        OwncloudSetupPage->setSizePolicy(sizePolicy);
        OwncloudSetupPage->setWindowTitle(QString::fromUtf8("Form"));
        OwncloudSetupPage->setAutoFillBackground(false);
        OwncloudSetupPage->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(OwncloudSetupPage);
        verticalLayout_2->setObjectName("verticalLayout_2");
        topLabel = new QLabel(OwncloudSetupPage);
        topLabel->setObjectName("topLabel");

        verticalLayout_2->addWidget(topLabel);

        verticalSpacer = new QSpacerItem(20, 80, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        logoLabel = new QLabel(OwncloudSetupPage);
        logoLabel->setObjectName("logoLabel");

        horizontalLayout_4->addWidget(logoLabel);

        horizontalSpacer_4 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalSpacer_5 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        verticalLayout_2->addItem(verticalSpacer_5);

        login = new QWidget(OwncloudSetupPage);
        login->setObjectName("login");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(login->sizePolicy().hasHeightForWidth());
        login->setSizePolicy(sizePolicy1);
        login->setMinimumSize(QSize(0, 80));
        login->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_2 = new QHBoxLayout(login);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        serverBox = new QHBoxLayout();
        serverBox->setSpacing(0);
        serverBox->setObjectName("serverBox");
        serverBox->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_7 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);

        serverAddressLabel = new QLabel(login);
        serverAddressLabel->setObjectName("serverAddressLabel");
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        serverAddressLabel->setFont(font);

        horizontalLayout->addWidget(serverAddressLabel);

        horizontalSpacer_8 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout);

        comboBox = new QComboBox(login);
        comboBox->setObjectName("comboBox");

        verticalLayout->addWidget(comboBox);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_2 = new QSpacerItem(80, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(-1, 8, 0, -1);
        leUrl = new OCC::PostfixLineEdit(login);
        leUrl->setObjectName("leUrl");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(leUrl->sizePolicy().hasHeightForWidth());
        leUrl->setSizePolicy(sizePolicy2);
        leUrl->setMinimumSize(QSize(200, 0));
        leUrl->setPlaceholderText(QString::fromUtf8("https://try.nextcloud.com"));

        verticalLayout_5->addWidget(leUrl);

        serverAddressDescriptionLabel = new QLabel(login);
        serverAddressDescriptionLabel->setObjectName("serverAddressDescriptionLabel");
        sizePolicy.setHeightForWidth(serverAddressDescriptionLabel->sizePolicy().hasHeightForWidth());
        serverAddressDescriptionLabel->setSizePolicy(sizePolicy);
        serverAddressDescriptionLabel->setAlignment(Qt::AlignCenter);
        serverAddressDescriptionLabel->setWordWrap(true);

        verticalLayout_5->addWidget(serverAddressDescriptionLabel);


        horizontalLayout_5->addLayout(verticalLayout_5);

        horizontalSpacer = new QSpacerItem(80, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_5);

        errorLabel = new QLabel(login);
        errorLabel->setObjectName("errorLabel");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(errorLabel->sizePolicy().hasHeightForWidth());
        errorLabel->setSizePolicy(sizePolicy3);
        errorLabel->setText(QString::fromUtf8("Error Label"));
        errorLabel->setTextFormat(Qt::RichText);
        errorLabel->setOpenExternalLinks(true);

        verticalLayout->addWidget(errorLabel);

        progressLayout = new QHBoxLayout();
        progressLayout->setObjectName("progressLayout");

        verticalLayout->addLayout(progressLayout);

        verticalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer_3);


        serverBox->addLayout(verticalLayout);


        horizontalLayout_2->addLayout(serverBox);


        verticalLayout_2->addWidget(login);

        verticalSpacer_4 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::MinimumExpanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        bottomLabel = new QLabel(OwncloudSetupPage);
        bottomLabel->setObjectName("bottomLabel");

        verticalLayout_2->addWidget(bottomLabel);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(-1, -1, -1, 0);

        verticalLayout_2->addLayout(horizontalLayout_3);


        retranslateUi(OwncloudSetupPage);

        QMetaObject::connectSlotsByName(OwncloudSetupPage);
    } // setupUi

    void retranslateUi(QWidget *OwncloudSetupPage)
    {
        topLabel->setText(QCoreApplication::translate("OwncloudSetupPage", "TextLabel", nullptr));
        logoLabel->setText(QCoreApplication::translate("OwncloudSetupPage", "Logo", nullptr));
        serverAddressLabel->setText(QCoreApplication::translate("OwncloudSetupPage", "Server address", nullptr));
        serverAddressDescriptionLabel->setText(QCoreApplication::translate("OwncloudSetupPage", "This is the link to your %1 web interface when you open it in the browser.", nullptr));
        bottomLabel->setText(QCoreApplication::translate("OwncloudSetupPage", "TextLabel", nullptr));
        (void)OwncloudSetupPage;
    } // retranslateUi

};

namespace Ui {
    class OwncloudSetupPage: public Ui_OwncloudSetupPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OWNCLOUDSETUPNOCREDSPAGE_H
