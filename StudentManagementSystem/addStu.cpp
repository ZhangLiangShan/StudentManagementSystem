#pragma execution_character_set("utf-8")
#include "addStu.h"
#include<qstring.h>
#include<qmessagebox.h>
#include<qtextcodec.h>
#include<qpushbutton.h>
#include<iostream>
#include<qdebug.h>
#include <QList>
#include <QAbstractButton>
#include <QCheckBox>

addStu::addStu(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	connect(this->ui.pushButton_confirm, SIGNAL(clicked(bool)), this, SLOT(getConfirm()));
}

void addStu::getConfirm()
{
	QString name = this->ui.line_name->text();
	QString id = this->ui.line_id->text();
	QString sex = this->ui.sexGroup->checkedButton()->text();
	QList<QAbstractButton *> ins_list = this->ui.insGroup->buttons();
	QString ins;
	for (size_t i = 0; i < ins_list.length(); i++)
	{
		QAbstractButton * che = ins_list.at(i);
		if (che->isChecked())
		{
			ins += che->text() + ",";
		}
	}
	QString age = this->ui.comboBox_age->currentText();
	QString dev = this->ui.comboBox_department->currentText();
	QString content = name + '\n' + id+'\n'+sex+'\n'+age+'\n'+dev+'\n'+ins;
	if (name.length()<1 || id.length()<1 || ins.length()<1)
	{
		QMessageBox::critical(this, "错误!", "缺少相关信息，请检查填写完整！");
	}
	else
	{
		int ret=QMessageBox::information(this, "相关信息", content, "确认","取消");//OK对应ret为0，cancel对应ret为1,返回值可用于后续操作
		qDebug()<< ret;
		if (ret==0)
		{
			clearUserInterface();
		}
	}
	
	
}

void addStu::clearUserInterface()
{
	this->ui.line_name->clear();
	this->ui.line_id->clear();
	this->ui.rbtn_men->setChecked(true);
	this->ui.comboBox_age->setCurrentIndex(0);
	this->ui.comboBox_department->setCurrentIndex(0);

	QList<QAbstractButton *> ins_list = this->ui.insGroup->buttons();
	for (size_t i = 0; i < ins_list.length(); i++)
	{
		QAbstractButton *box = ins_list.at(i);
		box->setChecked(false);
	}
	this->ui.line_name->setFocus();
}