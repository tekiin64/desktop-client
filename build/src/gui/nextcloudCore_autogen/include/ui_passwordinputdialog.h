/********************************************************************************
** Form generated from reading UI file 'passwordinputdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWORDINPUTDIALOG_H
#define UI_PASSWORDINPUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

namespace OCC {

class Ui_PasswordInputDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *passwordLineEditLabel;
    QLineEdit *passwordLineEdit;
    QLabel *labelErrorMessage;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OCC__PasswordInputDialog)
    {
        if (OCC__PasswordInputDialog->objectName().isEmpty())
            OCC__PasswordInputDialog->setObjectName("OCC__PasswordInputDialog");
        OCC__PasswordInputDialog->setWindowModality(Qt::WindowModal);
        OCC__PasswordInputDialog->resize(276, 125);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OCC__PasswordInputDialog->sizePolicy().hasHeightForWidth());
        OCC__PasswordInputDialog->setSizePolicy(sizePolicy);
        OCC__PasswordInputDialog->setSizeGripEnabled(false);
        OCC__PasswordInputDialog->setModal(true);
        verticalLayout = new QVBoxLayout(OCC__PasswordInputDialog);
        verticalLayout->setObjectName("verticalLayout");
        passwordLineEditLabel = new QLabel(OCC__PasswordInputDialog);
        passwordLineEditLabel->setObjectName("passwordLineEditLabel");

        verticalLayout->addWidget(passwordLineEditLabel);

        passwordLineEdit = new QLineEdit(OCC__PasswordInputDialog);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setInputMask(QString::fromUtf8(""));
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(passwordLineEdit);

        labelErrorMessage = new QLabel(OCC__PasswordInputDialog);
        labelErrorMessage->setObjectName("labelErrorMessage");
        labelErrorMessage->setEnabled(true);
        labelErrorMessage->setStyleSheet(QString::fromUtf8("color: rgb(118, 118, 118)"));
        labelErrorMessage->setWordWrap(true);

        verticalLayout->addWidget(labelErrorMessage);

        buttonBox = new QDialogButtonBox(OCC__PasswordInputDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(OCC__PasswordInputDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, OCC__PasswordInputDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, OCC__PasswordInputDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(OCC__PasswordInputDialog);
    } // setupUi

    void retranslateUi(QDialog *OCC__PasswordInputDialog)
    {
        OCC__PasswordInputDialog->setWindowTitle(QCoreApplication::translate("OCC::PasswordInputDialog", "Password for share required", nullptr));
        passwordLineEditLabel->setText(QCoreApplication::translate("OCC::PasswordInputDialog", "Please enter a password for your share:", nullptr));
        passwordLineEdit->setPlaceholderText(QString());
        labelErrorMessage->setText(QString());
    } // retranslateUi

};

} // namespace OCC

namespace OCC {
namespace Ui {
    class PasswordInputDialog: public Ui_PasswordInputDialog {};
} // namespace Ui
} // namespace OCC

#endif // UI_PASSWORDINPUTDIALOG_H
