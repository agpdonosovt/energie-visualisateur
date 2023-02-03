#include "canvas_widget.hpp"

#include <QWidget>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QLayout>

CanvasWidget::CanvasWidget(QWidget * parent): QWidget(parent){
	QGraphicsView *view = new QGraphicsView();
	scene = new QGraphicsScene(0, 0, 100, 100, parent);
	view->setScene(scene);
	QHBoxLayout *layout = new QHBoxLayout(parent);
	layout->addWidget(view);
	setLayout(layout); //Don't know if we want this
}

void CanvasWidget::addGraphic(QGraphicsItem * item){
	scene->addItem(item);
}
