////////////////////////////////////////////////////////
// ECE 3574 - Exercise-11 -  Qt widgets
//
#include <QtWidgets>
#include <QApplication>
#include "complex_widget.hpp"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	ComplexWidget *widget = new ComplexWidget();
	widget->show();
	return app.exec();
}
