/********************************************************************************
** Form generated from reading UI file 'owncloudhttpcredspage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OWNCLOUDHTTPCREDSPAGE_H
#define UI_OWNCLOUDHTTPCREDSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OwncloudHttpCredsPage
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *resultLayout;
    QLabel *topLabel;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QFormLayout *formLayout;
    QLabel *usernameLabel;
    QLabel *passwordLabel;
    QLabel *errorLabel;
    QLineEdit *leUsername;
    QLineEdit *lePassword;
    QSpacerItem *verticalSpacer;
    QLabel *bottomLabel;
    QLabel *tokenLabel;

    void setupUi(QWidget *OwncloudHttpCredsPage)
    {
        if (OwncloudHttpCredsPage->objectName().isEmpty())
            OwncloudHttpCredsPage->setObjectName("OwncloudHttpCredsPage");
        OwncloudHttpCredsPage->resize(350, 248);
        OwncloudHttpCredsPage->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(OwncloudHttpCredsPage);
        gridLayout->setObjectName("gridLayout");
        resultLayout = new QHBoxLayout();
        resultLayout->setObjectName("resultLayout");

        gridLayout->addLayout(resultLayout, 5, 1, 1, 1);

        topLabel = new QLabel(OwncloudHttpCredsPage);
        topLabel->setObjectName("topLabel");
        topLabel->setText(QString::fromUtf8("TextLabel"));
        topLabel->setTextFormat(Qt::RichText);
        topLabel->setAlignment(Qt::AlignCenter);
        topLabel->setWordWrap(true);

        gridLayout->addWidget(topLabel, 0, 0, 1, 3);

        horizontalSpacer = new QSpacerItem(48, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(48, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 2, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        usernameLabel = new QLabel(OwncloudHttpCredsPage);
        usernameLabel->setObjectName("usernameLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, usernameLabel);

        passwordLabel = new QLabel(OwncloudHttpCredsPage);
        passwordLabel->setObjectName("passwordLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, passwordLabel);

        errorLabel = new QLabel(OwncloudHttpCredsPage);
        errorLabel->setObjectName("errorLabel");
        errorLabel->setText(QString::fromUtf8("Error Label"));
        errorLabel->setTextFormat(Qt::RichText);
        errorLabel->setOpenExternalLinks(true);

        formLayout->setWidget(2, QFormLayout::SpanningRole, errorLabel);

        leUsername = new QLineEdit(OwncloudHttpCredsPage);
        leUsername->setObjectName("leUsername");

        formLayout->setWidget(0, QFormLayout::FieldRole, leUsername);

        lePassword = new QLineEdit(OwncloudHttpCredsPage);
        lePassword->setObjectName("lePassword");
        lePassword->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, lePassword);


        gridLayout->addLayout(formLayout, 3, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 68, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 1, 1, 1);

        bottomLabel = new QLabel(OwncloudHttpCredsPage);
        bottomLabel->setObjectName("bottomLabel");
        bottomLabel->setText(QString::fromUtf8("TextLabel"));
        bottomLabel->setTextFormat(Qt::RichText);

        gridLayout->addWidget(bottomLabel, 6, 0, 1, 3);

        tokenLabel = new QLabel(OwncloudHttpCredsPage);
        tokenLabel->setObjectName("tokenLabel");
        tokenLabel->setText(QString::fromUtf8("TextLabel"));
        tokenLabel->setTextFormat(Qt::RichText);
        tokenLabel->setWordWrap(true);
        tokenLabel->setOpenExternalLinks(true);

        gridLayout->addWidget(tokenLabel, 1, 1, 1, 1);

#if QT_CONFIG(shortcut)
        usernameLabel->setBuddy(leUsername);
        passwordLabel->setBuddy(lePassword);
#endif // QT_CONFIG(shortcut)

        retranslateUi(OwncloudHttpCredsPage);

        QMetaObject::connectSlotsByName(OwncloudHttpCredsPage);
    } // setupUi

    void retranslateUi(QWidget *OwncloudHttpCredsPage)
    {
        usernameLabel->setText(QCoreApplication::translate("OwncloudHttpCredsPage", "&Username", nullptr));
        passwordLabel->setText(QCoreApplication::translate("OwncloudHttpCredsPage", "&Password", nullptr));
        (void)OwncloudHttpCredsPage;
    } // retranslateUi

};

namespace Ui {
    class OwncloudHttpCredsPage: public Ui_OwncloudHttpCredsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OWNCLOUDHTTPCREDSPAGE_H
