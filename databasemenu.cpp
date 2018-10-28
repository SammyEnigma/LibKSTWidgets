#include "databasemenu.h"
#include "databasedialog.h"

namespace KSTWidgets
{
	DatabaseMenu::DatabaseMenu(QWidget *parent) : QMenu("&Database",parent)
	{
		connect=new QAction("&Connect",this);
		connect->setEnabled(false);
		addAction(connect);
		configure=new QAction("C&onfigure",this);
		configure->setEnabled(true);
		QObject::connect(configure,&QAction::triggered,[this](bool checked) { (new DatabaseDialog(this))->show(); });
		addAction(configure);
	}

	void DatabaseMenu::Configured()
	{
		if (!disconnect->isEnabled()) connect->setEnabled(true);
	}

	void DatabaseMenu::Connected()
	{
		connect->setEnabled(false);
		disconnect->setEnabled(true);
	}

	void DatabaseMenu::Disconnected()
	{
		connect->setEnabled(true);
		disconnect->setEnabled(false);
	}
}
