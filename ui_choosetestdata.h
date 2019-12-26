/********************************************************************************
** Form generated from reading UI file 'choosetestdata.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSETESTDATA_H
#define UI_CHOOSETESTDATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_chooseTestData
{
public:
    QListWidget *liTests;
    QTextBrowser *txtTestInfo;
    QPushButton *bChooseTest;
    QCustomPlot *testPreviewGraph;

    void setupUi(QDialog *chooseTestData)
    {
        if (chooseTestData->objectName().isEmpty())
            chooseTestData->setObjectName(QStringLiteral("chooseTestData"));
        chooseTestData->resize(694, 490);
        liTests = new QListWidget(chooseTestData);
        liTests->setObjectName(QStringLiteral("liTests"));
        liTests->setGeometry(QRect(10, 20, 241, 401));
        txtTestInfo = new QTextBrowser(chooseTestData);
        txtTestInfo->setObjectName(QStringLiteral("txtTestInfo"));
        txtTestInfo->setEnabled(true);
        txtTestInfo->setGeometry(QRect(270, 20, 391, 91));
        bChooseTest = new QPushButton(chooseTestData);
        bChooseTest->setObjectName(QStringLiteral("bChooseTest"));
        bChooseTest->setGeometry(QRect(100, 430, 151, 51));
        testPreviewGraph = new QCustomPlot(chooseTestData);
        testPreviewGraph->setObjectName(QStringLiteral("testPreviewGraph"));
        testPreviewGraph->setGeometry(QRect(270, 140, 391, 281));

        retranslateUi(chooseTestData);
        QObject::connect(bChooseTest, SIGNAL(clicked()), chooseTestData, SLOT(accept()));

        QMetaObject::connectSlotsByName(chooseTestData);
    } // setupUi

    void retranslateUi(QDialog *chooseTestData)
    {
        chooseTestData->setWindowTitle(QApplication::translate("chooseTestData", "Dialog", Q_NULLPTR));
        bChooseTest->setText(QApplication::translate("chooseTestData", "Testi Se\303\247", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class chooseTestData: public Ui_chooseTestData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSETESTDATA_H
