/********************************************************************************
** Form generated from reading UI file 'settingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QStackedWidget>

namespace OCC {

class Ui_SettingsDialog
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *stack;

    void setupUi(QDialog *OCC__SettingsDialog)
    {
        if (OCC__SettingsDialog->objectName().isEmpty())
            OCC__SettingsDialog->setObjectName("OCC__SettingsDialog");
        OCC__SettingsDialog->resize(516, 457);
        gridLayout = new QGridLayout(OCC__SettingsDialog);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        stack = new QStackedWidget(OCC__SettingsDialog);
        stack->setObjectName("stack");
        stack->setLineWidth(0);

        gridLayout->addWidget(stack, 0, 0, 1, 1);


        retranslateUi(OCC__SettingsDialog);

        QMetaObject::connectSlotsByName(OCC__SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *OCC__SettingsDialog)
    {
        OCC__SettingsDialog->setWindowTitle(QCoreApplication::translate("OCC::SettingsDialog", "Settings", nullptr));
    } // retranslateUi

};

} // namespace OCC

namespace OCC {
namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui
} // namespace OCC

#endif // UI_SETTINGSDIALOG_H
