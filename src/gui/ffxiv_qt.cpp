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
	// QString -> STD string
	QString inputText = ui.input->toPlainText();
	// Get translation
	std::string transitionText = translate(inputText.toStdString());
	// STD string -> QString
	QString finalString = QString::fromStdString(transitionText);

	// display our message
	ui.output->setText(finalString);
}

void FFXIV_QT::on_button_clear_clicked()
{
	// Clear all fields
	ui.input->setText("");
	ui.output->setText("");
}