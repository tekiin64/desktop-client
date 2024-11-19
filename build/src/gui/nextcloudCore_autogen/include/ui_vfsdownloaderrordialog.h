/********************************************************************************
** Form generated from reading UI file 'vfsdownloaderrordialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VFSDOWNLOADERRORDIALOG_H
#define UI_VFSDOWNLOADERRORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

namespace OCC {

class Ui_VfsDownloadErrorDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *descriptionLabel;
    QLabel *explanationLabel;
    QPushButton *moreDetailsButton;
    QLabel *moreDetailsLabel;
    QDialogButtonBox *buttonBox;
    QLabel *errorLabel;

    void setupUi(QDialog *OCC__VfsDownloadErrorDialog)
    {
        if (OCC__VfsDownloadErrorDialog->objectName().isEmpty())
            OCC__VfsDownloadErrorDialog->setObjectName("OCC__VfsDownloadErrorDialog");
        OCC__VfsDownloadErrorDialog->resize(397, 155);
        verticalLayout = new QVBoxLayout(OCC__VfsDownloadErrorDialog);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        descriptionLabel = new QLabel(OCC__VfsDownloadErrorDialog);
        descriptionLabel->setObjectName("descriptionLabel");
        descriptionLabel->setTextFormat(Qt::PlainText);
        descriptionLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        descriptionLabel->setWordWrap(false);

        verticalLayout->addWidget(descriptionLabel);

        explanationLabel = new QLabel(OCC__VfsDownloadErrorDialog);
        explanationLabel->setObjectName("explanationLabel");
        explanationLabel->setTextFormat(Qt::PlainText);
        explanationLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        explanationLabel->setWordWrap(false);

        verticalLayout->addWidget(explanationLabel);

        moreDetailsButton = new QPushButton(OCC__VfsDownloadErrorDialog);
        moreDetailsButton->setObjectName("moreDetailsButton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(moreDetailsButton->sizePolicy().hasHeightForWidth());
        moreDetailsButton->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(moreDetailsButton);

        moreDetailsLabel = new QLabel(OCC__VfsDownloadErrorDialog);
        moreDetailsLabel->setObjectName("moreDetailsLabel");
        moreDetailsLabel->setWordWrap(true);

        verticalLayout->addWidget(moreDetailsLabel);

        buttonBox = new QDialogButtonBox(OCC__VfsDownloadErrorDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        errorLabel = new QLabel(OCC__VfsDownloadErrorDialog);
        errorLabel->setObjectName("errorLabel");
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 200));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 115));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        errorLabel->setPalette(palette);
        errorLabel->setTextFormat(Qt::PlainText);

        verticalLayout->addWidget(errorLabel);


        retranslateUi(OCC__VfsDownloadErrorDialog);
        QObject::connect(moreDetailsButton, &QPushButton::clicked, moreDetailsLabel, qOverload<>(&QLabel::show));
        QObject::connect(moreDetailsButton, &QPushButton::clicked, moreDetailsButton, qOverload<>(&QPushButton::hide));

        QMetaObject::connectSlotsByName(OCC__VfsDownloadErrorDialog);
    } // setupUi

    void retranslateUi(QDialog *OCC__VfsDownloadErrorDialog)
    {
        OCC__VfsDownloadErrorDialog->setWindowTitle(QCoreApplication::translate("OCC::VfsDownloadErrorDialog", "Download error", nullptr));
        descriptionLabel->setText(QCoreApplication::translate("OCC::VfsDownloadErrorDialog", "Error downloading", nullptr));
        explanationLabel->setText(QCoreApplication::translate("OCC::VfsDownloadErrorDialog", "could not be downloaded", nullptr));
        moreDetailsButton->setText(QCoreApplication::translate("OCC::VfsDownloadErrorDialog", "> More details", nullptr));
        moreDetailsLabel->setText(QCoreApplication::translate("OCC::VfsDownloadErrorDialog", "More details", nullptr));
        errorLabel->setText(QString());
    } // retranslateUi

};

} // namespace OCC

namespace OCC {
namespace Ui {
    class VfsDownloadErrorDialog: public Ui_VfsDownloadErrorDialog {};
} // namespace Ui
} // namespace OCC

#endif // UI_VFSDOWNLOADERRORDIALOG_H
