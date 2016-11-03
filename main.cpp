#include "src\gui\ffxiv_qt.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	FFXIV_QT w;
	w.show();
	return a.exec();
}
