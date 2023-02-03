#include "complex_widget.hpp"

#include "top_widget.hpp"
#include "tabs_widget.hpp"

#include <QLayout>

ComplexWidget::ComplexWidget()
{
	/**
	 * Outer most layout
	 *
	 *  -------------------
	 *  |  Layout "Top"  |
	 *  |  Layout "Tabs"  |
	 *  -------------------
	 */
	QVBoxLayout *layout = new QVBoxLayout;
	TopWidget *top = new TopWidget(this);
	TabsWidget *tabs = new TabsWidget(this);
	
	layout->addWidget(top);
	layout->addWidget(tabs);
	
	//connect a signal and slots
	//QObject::connect(button, SIGNAL(clicked()), this, SLOT(updateClicked()));
	
	//prepare to show
	setLayout(layout);
	setWindowTitle("MDE Energix Software");
}