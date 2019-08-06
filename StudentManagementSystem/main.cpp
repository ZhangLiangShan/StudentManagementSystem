#include "addStu.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	addStu w;
	w.show();
	return a.exec();
}
