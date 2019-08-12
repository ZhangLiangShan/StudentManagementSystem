#pragma once

#include <QtWidgets/QDialog>
#include "ui_addStu.h"

class addStu : public QDialog
{
	Q_OBJECT

public:
	addStu(QWidget *parent = Q_NULLPTR);

private:
	Ui::addStuClass ui;
	
	void clearUserInterface();
	void writeToFile(QString cnt);
private slots:
	void getConfirm();
	void closeDialog();

};
