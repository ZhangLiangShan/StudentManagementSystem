#include "addStu.h"
#include<qstring.h>
#include<qmessagebox.h>
#include<qtextcodec.h>
#include<qpushbutton.h>
#include<iostream>
#include<qdebug.h>

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

	//QMessageBox msgBox;
	//msgBox.setText(name+"\n"+id);
	//msgBox.setInformativeText("请确认信息！");
	///*msgBox.setStandardButtons(QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
	//msgBox.setDefaultButton(QMessageBox::Save);*/
	//QPushButton *cbtn= msgBox.addButton("OK", QMessageBox::AcceptRole);
	//msgBox.addButton("Cancel", QMessageBox::RejectRole);
	//msgBox.setDefaultButton(cbtn);
	//int ret = msgBox.exec();
	//msgBox.exec();
	/*QMessageBox::aboutQt(this, "QMessageBox样式1");*/
	QString content = name + '\n' + id;
	if (name.length()<1 || id.length()<1)
	{
		QMessageBox::critical(this, "Error!", content);
	}
	else
	{
		int ret=QMessageBox::information(this, "Message", content, QMessageBox::Ok | QMessageBox::Cancel);//OK对应ret为0，cancel对应ret为1,返回值可用于后续操作
		qDebug()<< ret;
	}
	
	
}

