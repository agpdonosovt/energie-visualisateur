#include "tabs_widget.hpp"
#include <QLayout>

TabsWidget::TabsWidget(QWidget *parent) : QWidget(parent) {	
	//Tab 1
	QPushButton *tab_1_button = new QPushButton("Tab 1");
	tab_1_button->setToolTip("Click to view Tab 1");
	
	//Tab 2
	QPushButton *tab_2_button = new QPushButton("Tab 2");
	tab_2_button->setToolTip("Click to view Tab 2");
	
	//Tab 3
	QPushButton *tab_3_button = new QPushButton("Tab 3");
	tab_3_button->setToolTip("Click to view Tab 3");
	
	//Tab 4
	QPushButton *tab_4_button = new QPushButton("Tab 4");
	tab_4_button->setToolTip("Click to Tab 4");
	
	
	/**
	 * "Tabs" layout
	 *
	 *  -----------------------------------
	 *  |  Tab_1   Tab_2   Tab_3   Tab_4  |
	 *  -----------------------------------
	 */
	QHBoxLayout *layout = new QHBoxLayout;
	layout->addWidget(tab_1_button);
	layout->addWidget(tab_2_button);
	layout->addWidget(tab_3_button);
	layout->addWidget(tab_4_button);
	setLayout(layout); //Don't know if we want this
}