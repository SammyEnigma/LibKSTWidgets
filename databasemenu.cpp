#include "databasemenu.h"
#include "localsqlite.h"

namespace KSTWidgets
{
	DatabaseMenu::DatabaseMenu(QWidget *parent) : QMenu("&Database",parent)
	{
		connect=new QAction("&Connect",this);
		QObject::connect(connect,&QAction::triggered,this,&DatabaseMenu::Connect);
		addAction(connect);
		configure=new QAction("C&onfigure",this);
		configure->setEnabled(true);
		QObject::connect(configure,&QAction::triggered,this,&DatabaseMenu::Configure);
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
