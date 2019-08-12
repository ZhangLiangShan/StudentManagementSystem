/********************************************************************************
** Form generated from reading UI file 'addStu.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSTU_H
#define UI_ADDSTU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_addStuClass
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *line_name;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *line_id;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QRadioButton *rbtn_men;
    QRadioButton *rbtn_women;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QComboBox *comboBox_age;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QComboBox *comboBox_department;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QGridLayout *gridLayout;
    QCheckBox *checkBox_basketball;
    QCheckBox *checkBox_song;
    QCheckBox *checkBox_jump;
    QCheckBox *checkBox_rap;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_confirm;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_cancel;
    QButtonGroup *sexGroup;
    QButtonGroup *insGroup;

    void setupUi(QDialog *addStuClass)
    {
        if (addStuClass->objectName().isEmpty())
            addStuClass->setObjectName(QStringLiteral("addStuClass"));
        addStuClass->resize(350, 480);
        addStuClass->setMinimumSize(QSize(350, 480));
        addStuClass->setMaximumSize(QSize(350, 480));
        verticalLayout = new QVBoxLayout(addStuClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(addStuClass);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        font.setPointSize(30);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 255);"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(addStuClass);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        line_name = new QLineEdit(addStuClass);
        line_name->setObjectName(QStringLiteral("line_name"));
        line_name->setClearButtonEnabled(true);

        horizontalLayout->addWidget(line_name);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 8);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(addStuClass);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        line_id = new QLineEdit(addStuClass);
        line_id->setObjectName(QStringLiteral("line_id"));
        line_id->setClearButtonEnabled(true);

        horizontalLayout_2->addWidget(line_id);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 8);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(addStuClass);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        rbtn_men = new QRadioButton(addStuClass);
        sexGroup = new QButtonGroup(addStuClass);
        sexGroup->setObjectName(QStringLiteral("sexGroup"));
        sexGroup->addButton(rbtn_men);
        rbtn_men->setObjectName(QStringLiteral("rbtn_men"));

        horizontalLayout_3->addWidget(rbtn_men);

        rbtn_women = new QRadioButton(addStuClass);
        sexGroup->addButton(rbtn_women);
        rbtn_women->setObjectName(QStringLiteral("rbtn_women"));

        horizontalLayout_3->addWidget(rbtn_women);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 4);
        horizontalLayout_3->setStretch(2, 4);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(addStuClass);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        comboBox_age = new QComboBox(addStuClass);
        comboBox_age->setObjectName(QStringLiteral("comboBox_age"));

        horizontalLayout_4->addWidget(comboBox_age);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 4);
        horizontalLayout_4->setStretch(2, 4);

        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_6 = new QLabel(addStuClass);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_5->addWidget(label_6);

        comboBox_department = new QComboBox(addStuClass);
        comboBox_department->setObjectName(QStringLiteral("comboBox_department"));
        comboBox_department->setEditable(false);
        comboBox_department->setDuplicatesEnabled(false);

        horizontalLayout_5->addWidget(comboBox_department);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 4);
        horizontalLayout_5->setStretch(2, 4);

        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_7 = new QLabel(addStuClass);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_6->addWidget(label_7);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        checkBox_basketball = new QCheckBox(addStuClass);
        insGroup = new QButtonGroup(addStuClass);
        insGroup->setObjectName(QStringLiteral("insGroup"));
        insGroup->setExclusive(false);
        insGroup->addButton(checkBox_basketball);
        checkBox_basketball->setObjectName(QStringLiteral("checkBox_basketball"));

        gridLayout->addWidget(checkBox_basketball, 0, 0, 1, 1);

        checkBox_song = new QCheckBox(addStuClass);
        insGroup->addButton(checkBox_song);
        checkBox_song->setObjectName(QStringLiteral("checkBox_song"));

        gridLayout->addWidget(checkBox_song, 0, 1, 1, 1);

        checkBox_jump = new QCheckBox(addStuClass);
        insGroup->addButton(checkBox_jump);
        checkBox_jump->setObjectName(QStringLiteral("checkBox_jump"));

        gridLayout->addWidget(checkBox_jump, 1, 0, 1, 1);

        checkBox_rap = new QCheckBox(addStuClass);
        insGroup->addButton(checkBox_rap);
        checkBox_rap->setObjectName(QStringLiteral("checkBox_rap"));

        gridLayout->addWidget(checkBox_rap, 1, 1, 1, 1);


        horizontalLayout_6->addLayout(gridLayout);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 8);

        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        pushButton_confirm = new QPushButton(addStuClass);
        pushButton_confirm->setObjectName(QStringLiteral("pushButton_confirm"));

        horizontalLayout_7->addWidget(pushButton_confirm);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        pushButton_cancel = new QPushButton(addStuClass);
        pushButton_cancel->setObjectName(QStringLiteral("pushButton_cancel"));

        horizontalLayout_7->addWidget(pushButton_cancel);


        verticalLayout->addLayout(horizontalLayout_7);


        retranslateUi(addStuClass);

        comboBox_age->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(addStuClass);
    } // setupUi

    void retranslateUi(QDialog *addStuClass)
    {
        addStuClass->setWindowTitle(QApplication::translate("addStuClass", "\346\267\273\345\212\240\345\255\246\347\224\237", Q_NULLPTR));
        label->setText(QApplication::translate("addStuClass", "\346\267\273\345\212\240\345\255\246\347\224\237", Q_NULLPTR));
        label_2->setText(QApplication::translate("addStuClass", "\345\247\223\345\220\215", Q_NULLPTR));
        line_name->setPlaceholderText(QApplication::translate("addStuClass", "\350\257\267\350\276\223\345\205\245\345\247\223\345\220\215", Q_NULLPTR));
        label_3->setText(QApplication::translate("addStuClass", "\345\255\246\345\217\267", Q_NULLPTR));
        line_id->setPlaceholderText(QApplication::translate("addStuClass", "\350\257\267\350\276\223\345\205\245\345\255\246\345\217\267(\346\234\200\345\260\2217\344\275\215)", Q_NULLPTR));
        label_4->setText(QApplication::translate("addStuClass", "\346\200\247\345\210\253", Q_NULLPTR));
        rbtn_men->setText(QApplication::translate("addStuClass", "\347\224\267", Q_NULLPTR));
        rbtn_women->setText(QApplication::translate("addStuClass", "\345\245\263", Q_NULLPTR));
        label_5->setText(QApplication::translate("addStuClass", "\345\271\264\351\276\204", Q_NULLPTR));
        comboBox_age->clear();
        comboBox_age->insertItems(0, QStringList()
         << QApplication::translate("addStuClass", "18", Q_NULLPTR)
         << QApplication::translate("addStuClass", "19", Q_NULLPTR)
         << QApplication::translate("addStuClass", "20", Q_NULLPTR)
         << QApplication::translate("addStuClass", "21", Q_NULLPTR)
         << QApplication::translate("addStuClass", "22", Q_NULLPTR)
         << QApplication::translate("addStuClass", "23", Q_NULLPTR)
         << QApplication::translate("addStuClass", "24", Q_NULLPTR)
        );
        label_6->setText(QApplication::translate("addStuClass", "\351\231\242\347\263\273", Q_NULLPTR));
        comboBox_department->clear();
        comboBox_department->insertItems(0, QStringList()
         << QApplication::translate("addStuClass", "\346\234\272\346\242\260\345\267\245\347\250\213\345\255\246\351\231\242", Q_NULLPTR)
         << QApplication::translate("addStuClass", "\350\256\241\347\256\227\346\234\272\345\255\246\351\231\242", Q_NULLPTR)
         << QApplication::translate("addStuClass", "\345\234\237\346\234\250\345\267\245\347\250\213\345\255\246\351\231\242", Q_NULLPTR)
         << QApplication::translate("addStuClass", "\346\235\220\346\226\231\345\255\246\351\231\242", Q_NULLPTR)
        );
        label_7->setText(QApplication::translate("addStuClass", "\345\205\264\350\266\243", Q_NULLPTR));
        checkBox_basketball->setText(QApplication::translate("addStuClass", "\347\257\256\347\220\203", Q_NULLPTR));
        checkBox_song->setText(QApplication::translate("addStuClass", "\345\224\261", Q_NULLPTR));
        checkBox_jump->setText(QApplication::translate("addStuClass", "\350\267\263", Q_NULLPTR));
        checkBox_rap->setText(QApplication::translate("addStuClass", "Rap", Q_NULLPTR));
        pushButton_confirm->setText(QApplication::translate("addStuClass", "\347\241\256\345\256\232", Q_NULLPTR));
        pushButton_cancel->setText(QApplication::translate("addStuClass", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class addStuClass: public Ui_addStuClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSTU_H
