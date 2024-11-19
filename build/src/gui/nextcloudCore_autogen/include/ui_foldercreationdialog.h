/********************************************************************************
** Form generated from reading UI file 'foldercreationdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOLDERCREATIONDIALOG_H
#define UI_FOLDERCREATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

namespace OCC {

class Ui_FolderCreationDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *newFolderNameEdit;
    QLabel *labelErrorMessage;

    void setupUi(QDialog *OCC__FolderCreationDialog)
    {
        if (OCC__FolderCreationDialog->objectName().isEmpty())
            OCC__FolderCreationDialog->setObjectName("OCC__FolderCreationDialog");
        OCC__FolderCreationDialog->resize(355, 138);
        buttonBox = new QDialogButtonBox(OCC__FolderCreationDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(0, 90, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        newFolderNameEdit = new QLineEdit(OCC__FolderCreationDialog);
        newFolderNameEdit->setObjectName("newFolderNameEdit");
        newFolderNameEdit->setGeometry(QRect(20, 30, 321, 22));
        labelErrorMessage = new QLabel(OCC__FolderCreationDialog);
        labelErrorMessage->setObjectName("labelErrorMessage");
        labelErrorMessage->setEnabled(true);
        labelErrorMessage->setGeometry(QRect(20, 60, 321, 16));
        labelErrorMessage->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0)"));

        retranslateUi(OCC__FolderCreationDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, OCC__FolderCreationDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, OCC__FolderCreationDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(OCC__FolderCreationDialog);
    } // setupUi

    void retranslateUi(QDialog *OCC__FolderCreationDialog)
    {
        OCC__FolderCreationDialog->setWindowTitle(QCoreApplication::translate("OCC::FolderCreationDialog", "Create new folder", nullptr));
        newFolderNameEdit->setPlaceholderText(QCoreApplication::translate("OCC::FolderCreationDialog", "Enter folder name", nullptr));
        labelErrorMessage->setText(QCoreApplication::translate("OCC::FolderCreationDialog", "Folder already exists", nullptr));
    } // retranslateUi

};

} // namespace OCC

namespace OCC {
namespace Ui {
    class FolderCreationDialog: public Ui_FolderCreationDialog {};
} // namespace Ui
} // namespace OCC

#endif // UI_FOLDERCREATIONDIALOG_H
