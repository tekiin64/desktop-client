/********************************************************************************
** Form generated from reading UI file 'ignorelisteditor.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IGNORELISTEDITOR_H
#define UI_IGNORELISTEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include "ignorelisttablewidget.h"

namespace OCC {

class Ui_IgnoreListEditor
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QCheckBox *syncHiddenFilesCheckBox;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    IgnoreListTableWidget *ignoreTableWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OCC__IgnoreListEditor)
    {
        if (OCC__IgnoreListEditor->objectName().isEmpty())
            OCC__IgnoreListEditor->setObjectName("OCC__IgnoreListEditor");
        OCC__IgnoreListEditor->resize(555, 609);
        gridLayout_3 = new QGridLayout(OCC__IgnoreListEditor);
        gridLayout_3->setObjectName("gridLayout_3");
        groupBox = new QGroupBox(OCC__IgnoreListEditor);
        groupBox->setObjectName("groupBox");
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        syncHiddenFilesCheckBox = new QCheckBox(groupBox);
        syncHiddenFilesCheckBox->setObjectName("syncHiddenFilesCheckBox");

        gridLayout_2->addWidget(syncHiddenFilesCheckBox, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(OCC__IgnoreListEditor);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName("gridLayout");
        ignoreTableWidget = new IgnoreListTableWidget(groupBox_2);
        ignoreTableWidget->setObjectName("ignoreTableWidget");

        gridLayout->addWidget(ignoreTableWidget, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(OCC__IgnoreListEditor);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::RestoreDefaults);

        gridLayout_3->addWidget(buttonBox, 4, 0, 1, 1);


        retranslateUi(OCC__IgnoreListEditor);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, OCC__IgnoreListEditor, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, OCC__IgnoreListEditor, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(OCC__IgnoreListEditor);
    } // setupUi

    void retranslateUi(QDialog *OCC__IgnoreListEditor)
    {
        OCC__IgnoreListEditor->setWindowTitle(QCoreApplication::translate("OCC::IgnoreListEditor", "Ignored Files Editor", nullptr));
        groupBox->setTitle(QCoreApplication::translate("OCC::IgnoreListEditor", "Global Ignore Settings", nullptr));
        syncHiddenFilesCheckBox->setText(QCoreApplication::translate("OCC::IgnoreListEditor", "Sync hidden files", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("OCC::IgnoreListEditor", "Files Ignored by Patterns", nullptr));
    } // retranslateUi

};

} // namespace OCC

namespace OCC {
namespace Ui {
    class IgnoreListEditor: public Ui_IgnoreListEditor {};
} // namespace Ui
} // namespace OCC

#endif // UI_IGNORELISTEDITOR_H
