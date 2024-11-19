/********************************************************************************
** Form generated from reading UI file 'ignorelisttablewidget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IGNORELISTTABLEWIDGET_H
#define UI_IGNORELISTTABLEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

namespace OCC {

class Ui_IgnoreListTableWidget
{
public:
    QGridLayout *gridLayout_2;
    QTableWidget *tableWidget;
    QPushButton *addPushButton;
    QPushButton *removePushButton;
    QPushButton *removeAllPushButton;
    QSpacerItem *verticalSpacer;
    QLabel *descriptionLabel;

    void setupUi(QWidget *OCC__IgnoreListTableWidget)
    {
        if (OCC__IgnoreListTableWidget->objectName().isEmpty())
            OCC__IgnoreListTableWidget->setObjectName("OCC__IgnoreListTableWidget");
        OCC__IgnoreListTableWidget->resize(342, 378);
        OCC__IgnoreListTableWidget->setWindowTitle(QString::fromUtf8("IgnoreListTableWidget"));
        gridLayout_2 = new QGridLayout(OCC__IgnoreListTableWidget);
        gridLayout_2->setObjectName("gridLayout_2");
        tableWidget = new QTableWidget(OCC__IgnoreListTableWidget);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setEnabled(true);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setColumnCount(2);

        gridLayout_2->addWidget(tableWidget, 0, 0, 4, 1);

        addPushButton = new QPushButton(OCC__IgnoreListTableWidget);
        addPushButton->setObjectName("addPushButton");
        addPushButton->setEnabled(true);

        gridLayout_2->addWidget(addPushButton, 0, 1, 1, 1);

        removePushButton = new QPushButton(OCC__IgnoreListTableWidget);
        removePushButton->setObjectName("removePushButton");
        removePushButton->setEnabled(true);

        gridLayout_2->addWidget(removePushButton, 1, 1, 1, 1);

        removeAllPushButton = new QPushButton(OCC__IgnoreListTableWidget);
        removeAllPushButton->setObjectName("removeAllPushButton");

        gridLayout_2->addWidget(removeAllPushButton, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 322, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 3, 1, 1, 1);

        descriptionLabel = new QLabel(OCC__IgnoreListTableWidget);
        descriptionLabel->setObjectName("descriptionLabel");
        descriptionLabel->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(descriptionLabel->sizePolicy().hasHeightForWidth());
        descriptionLabel->setSizePolicy(sizePolicy);
        descriptionLabel->setTextFormat(Qt::PlainText);
        descriptionLabel->setWordWrap(true);

        gridLayout_2->addWidget(descriptionLabel, 4, 0, 1, 2);


        retranslateUi(OCC__IgnoreListTableWidget);

        QMetaObject::connectSlotsByName(OCC__IgnoreListTableWidget);
    } // setupUi

    void retranslateUi(QWidget *OCC__IgnoreListTableWidget)
    {
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("OCC::IgnoreListTableWidget", "Pattern", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("OCC::IgnoreListTableWidget", "Allow Deletion", nullptr));
        addPushButton->setText(QCoreApplication::translate("OCC::IgnoreListTableWidget", "Add", nullptr));
        removePushButton->setText(QCoreApplication::translate("OCC::IgnoreListTableWidget", "Remove", nullptr));
        removeAllPushButton->setText(QCoreApplication::translate("OCC::IgnoreListTableWidget", "Remove all", nullptr));
        descriptionLabel->setText(QString());
        (void)OCC__IgnoreListTableWidget;
    } // retranslateUi

};

} // namespace OCC

namespace OCC {
namespace Ui {
    class IgnoreListTableWidget: public Ui_IgnoreListTableWidget {};
} // namespace Ui
} // namespace OCC

#endif // UI_IGNORELISTTABLEWIDGET_H
