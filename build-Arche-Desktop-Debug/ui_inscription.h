/********************************************************************************
** Form generated from reading UI file 'inscription.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSCRIPTION_H
#define UI_INSCRIPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Inscription
{
public:
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QDateEdit *dateEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Inscription)
    {
        if (Inscription->objectName().isEmpty())
            Inscription->setObjectName(QStringLiteral("Inscription"));
        Inscription->resize(400, 386);
        label = new QLabel(Inscription);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 20, 162, 17));
        widget = new QWidget(Inscription);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(40, 60, 331, 291));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        radioButton_2 = new QRadioButton(widget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setChecked(true);

        verticalLayout->addWidget(radioButton_2);

        radioButton = new QRadioButton(widget);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        verticalLayout->addWidget(radioButton);


        horizontalLayout_3->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        dateEdit = new QDateEdit(widget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));

        horizontalLayout_4->addWidget(dateEdit);


        verticalLayout_2->addLayout(horizontalLayout_4);

        buttonBox = new QDialogButtonBox(widget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);

        buttonBox->raise();
        label->raise();
        label_2->raise();
        lineEdit->raise();
        label_4->raise();
        label_4->raise();
        radioButton_2->raise();
        radioButton->raise();
        label_4->raise();
        dateEdit->raise();
        label_5->raise();
        label->raise();
        label->raise();

        retranslateUi(Inscription);
        QObject::connect(buttonBox, SIGNAL(accepted()), Inscription, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Inscription, SLOT(reject()));

        QMetaObject::connectSlotsByName(Inscription);
    } // setupUi

    void retranslateUi(QDialog *Inscription)
    {
        Inscription->setWindowTitle(QApplication::translate("Inscription", "Dialog", 0));
        label->setText(QApplication::translate("Inscription", "Rentrez vos identifiants", 0));
        label_2->setText(QApplication::translate("Inscription", "Nom", 0));
        label_3->setText(QApplication::translate("Inscription", "Prenom", 0));
        label_4->setText(QApplication::translate("Inscription", "Qualit\303\251", 0));
        radioButton_2->setText(QApplication::translate("Inscription", "Enseignant", 0));
        radioButton->setText(QApplication::translate("Inscription", "Etudiant", 0));
        label_5->setText(QApplication::translate("Inscription", "Date de Naissances", 0));
    } // retranslateUi

};

namespace Ui {
    class Inscription: public Ui_Inscription {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSCRIPTION_H
