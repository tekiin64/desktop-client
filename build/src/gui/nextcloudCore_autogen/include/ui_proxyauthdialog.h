/********************************************************************************
** Form generated from reading UI file 'proxyauthdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROXYAUTHDIALOG_H
#define UI_PROXYAUTHDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

namespace OCC {

class Ui_ProxyAuthDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *usernameEdit;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *passwordEdit;
    QDialogButtonBox *buttonBox;
    QLabel *proxyAddress;

    void setupUi(QDialog *OCC__ProxyAuthDialog)
    {
        if (OCC__ProxyAuthDialog->objectName().isEmpty())
            OCC__ProxyAuthDialog->setObjectName("OCC__ProxyAuthDialog");
        OCC__ProxyAuthDialog->resize(351, 141);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OCC__ProxyAuthDialog->sizePolicy().hasHeightForWidth());
        OCC__ProxyAuthDialog->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(OCC__ProxyAuthDialog);
        gridLayout->setObjectName("gridLayout");
        label_2 = new QLabel(OCC__ProxyAuthDialog);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        usernameEdit = new QLineEdit(OCC__ProxyAuthDialog);
        usernameEdit->setObjectName("usernameEdit");

        gridLayout->addWidget(usernameEdit, 3, 1, 1, 1);

        label_4 = new QLabel(OCC__ProxyAuthDialog);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        label = new QLabel(OCC__ProxyAuthDialog);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 2);

        label_3 = new QLabel(OCC__ProxyAuthDialog);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        passwordEdit = new QLineEdit(OCC__ProxyAuthDialog);
        passwordEdit->setObjectName("passwordEdit");
        passwordEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(passwordEdit, 4, 1, 1, 1);

        buttonBox = new QDialogButtonBox(OCC__ProxyAuthDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 5, 0, 1, 2);

        proxyAddress = new QLabel(OCC__ProxyAuthDialog);
        proxyAddress->setObjectName("proxyAddress");
        proxyAddress->setText(QString::fromUtf8("TextLabel"));
        proxyAddress->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(proxyAddress, 2, 1, 1, 1);


        retranslateUi(OCC__ProxyAuthDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, OCC__ProxyAuthDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, OCC__ProxyAuthDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(OCC__ProxyAuthDialog);
    } // setupUi

    void retranslateUi(QDialog *OCC__ProxyAuthDialog)
    {
        OCC__ProxyAuthDialog->setWindowTitle(QCoreApplication::translate("OCC::ProxyAuthDialog", "Proxy authentication required", nullptr));
        label_2->setText(QCoreApplication::translate("OCC::ProxyAuthDialog", "Username:", nullptr));
        label_4->setText(QCoreApplication::translate("OCC::ProxyAuthDialog", "Proxy:", nullptr));
        label->setText(QCoreApplication::translate("OCC::ProxyAuthDialog", "The proxy server needs a username and password.", nullptr));
        label_3->setText(QCoreApplication::translate("OCC::ProxyAuthDialog", "Password:", nullptr));
    } // retranslateUi

};

} // namespace OCC

namespace OCC {
namespace Ui {
    class ProxyAuthDialog: public Ui_ProxyAuthDialog {};
} // namespace Ui
} // namespace OCC

#endif // UI_PROXYAUTHDIALOG_H
