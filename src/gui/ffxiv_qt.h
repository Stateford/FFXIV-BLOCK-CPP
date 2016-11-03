#ifndef FFXIV_QT_H
#define FFXIV_QT_H

#include <QtWidgets/QMainWindow>
#include "ui_ffxiv_qt.h"

class FFXIV_QT : public QMainWindow
{
	Q_OBJECT

public:
	FFXIV_QT(QWidget *parent = 0);
	~FFXIV_QT();
public slots:
	void on_button_translate_clicked();		// handles our translate function
	void on_button_clear_clicked();		// clears our i/o boxes
private:
	Ui::FFXIV_QTClass ui;
};

#endif // FFXIV_QT_H
