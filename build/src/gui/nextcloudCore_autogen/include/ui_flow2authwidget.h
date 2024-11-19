/********************************************************************************
** Form generated from reading UI file 'flow2authwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLOW2AUTHWIDGET_H
#define UI_FLOW2AUTHWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "wizard/linklabel.h"

QT_BEGIN_NAMESPACE

class Ui_Flow2AuthWidget
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *logoLabel;
    QLabel *label;
    QLabel *statusLabel;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    OCC::LinkLabel *copyLinkLabel;
    OCC::LinkLabel *openLinkLabel;
    QSpacerItem *horizontalSpacer;
    QLabel *errorLabel;
    QHBoxLayout *progressLayout;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Flow2AuthWidget)
    {
        if (Flow2AuthWidget->objectName().isEmpty())
            Flow2AuthWidget->setObjectName("Flow2AuthWidget");
        Flow2AuthWidget->resize(580, 330);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Flow2AuthWidget->sizePolicy().hasHeightForWidth());
        Flow2AuthWidget->setSizePolicy(sizePolicy);
        Flow2AuthWidget->setMinimumSize(QSize(500, 280));
        verticalLayout = new QVBoxLayout(Flow2AuthWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_3 = new QSpacerItem(20, 80, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(-1, 0, -1, 0);
        logoLabel = new QLabel(Flow2AuthWidget);
        logoLabel->setObjectName("logoLabel");
        logoLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(logoLabel);

        label = new QLabel(Flow2AuthWidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);

        verticalLayout_3->addWidget(label);

        statusLabel = new QLabel(Flow2AuthWidget);
        statusLabel->setObjectName("statusLabel");
        statusLabel->setText(QString::fromUtf8("Status"));
        statusLabel->setAlignment(Qt::AlignCenter);
        statusLabel->setMargin(0);

        verticalLayout_3->addWidget(statusLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, -1, -1);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(-1, 0, -1, -1);
        copyLinkLabel = new OCC::LinkLabel(Flow2AuthWidget);
        copyLinkLabel->setObjectName("copyLinkLabel");

        verticalLayout_2->addWidget(copyLinkLabel);

        openLinkLabel = new OCC::LinkLabel(Flow2AuthWidget);
        openLinkLabel->setObjectName("openLinkLabel");

        verticalLayout_2->addWidget(openLinkLabel);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout);

        errorLabel = new QLabel(Flow2AuthWidget);
        errorLabel->setObjectName("errorLabel");
        errorLabel->setTextFormat(Qt::PlainText);
        errorLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(errorLabel);

        progressLayout = new QHBoxLayout();
        progressLayout->setObjectName("progressLayout");

        verticalLayout_3->addLayout(progressLayout);


        verticalLayout->addLayout(verticalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        verticalSpacer = new QSpacerItem(20, 80, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(Flow2AuthWidget);

        QMetaObject::connectSlotsByName(Flow2AuthWidget);
    } // setupUi

    void retranslateUi(QWidget *Flow2AuthWidget)
    {
        Flow2AuthWidget->setWindowTitle(QCoreApplication::translate("Flow2AuthWidget", "Browser Authentication", nullptr));
        logoLabel->setText(QCoreApplication::translate("Flow2AuthWidget", "Logo", nullptr));
        label->setText(QCoreApplication::translate("Flow2AuthWidget", "Switch to your browser to connect your account", nullptr));
        errorLabel->setText(QCoreApplication::translate("Flow2AuthWidget", "An error occurred while connecting. Please try again.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Flow2AuthWidget: public Ui_Flow2AuthWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLOW2AUTHWIDGET_H
