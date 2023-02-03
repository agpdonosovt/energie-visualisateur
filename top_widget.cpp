#include "top_widget.hpp"

#include "canvas_widget.hpp"
#include "left_widget.hpp"

#include <QLayout>

TopWidget::TopWidget(QWidget *parent) : QWidget(parent) {	
	/**
	 * "Top" layout
	 *
	 *  ---------------------------------
	 *  |  Layout "Left"       Canvas   |
	 *  ---------------------------------
	 */
	QHBoxLayout *layout = new QHBoxLayout;
	
	CanvasWidget *canvas = new CanvasWidget(this);
	LeftWidget *left = new LeftWidget(this);
	
	layout->addWidget(left);
	layout->addWidget(canvas);
	
	setLayout(layout); //Don't know if we want this
}