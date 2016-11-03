#include "ffxiv_qt.h"
#include "../translate.h"

FFXIV_QT::FFXIV_QT(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

FFXIV_QT::~FFXIV_QT()
{

}

void FFXIV_QT::on_button_translate_clicked()
{
	ui.output->setText("clicked");
}

void FFXIV_QT::on_button_clear_clicked()
{
	ui.input->setText("");
	ui.output->setText("");
}