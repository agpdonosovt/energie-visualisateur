#include "left_widget.hpp"
#include <QLayout>

LeftWidget::LeftWidget(QWidget *parent) : QWidget(parent) {	
	//Simulation Variables
	QPushButton *sim_var_button = new QPushButton("Simulation Variables");
	sim_var_button->setToolTip("Click to edit Simulation Variables");
	
	//File Settings
	QPushButton *file_set_button = new QPushButton("File Settings");
	file_set_button->setToolTip("Click to set File Settings");
	
	//Load Simulation
	QPushButton *load_sim_button = new QPushButton("Load Simulation");
	load_sim_button->setToolTip("Click to Load another Simulation");
	
	//Export
	QPushButton *export_button = new QPushButton("Export");
	export_button->setToolTip("Click to Export your Simulation");
	
	
	/**
	 * "Left" layout
	 *
	 *  ------------------------------
	 *  |  Button "Sim Variables"    |
	 *  |  Button "File Settings"    |
	 *  |  Button "Load Simulation"  |
	 *  |  Button "Export"           |
	 *  ------------------------------
	 */
	QVBoxLayout *layout = new QVBoxLayout;
	layout->addWidget(sim_var_button);
	layout->addWidget(file_set_button);
	layout->addWidget(load_sim_button);
	layout->addWidget(export_button);
	setLayout(layout); //Don't know if we want this
}