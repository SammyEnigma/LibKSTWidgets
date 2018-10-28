#include "publishermenu.h"

namespace KSTWidgets
{
	PublisherMenu::PublisherMenu(QWidget *parent) : QMenu("&Publisher",parent)
	{
		logIn=new QAction("&Log In",this);
		connect(logIn,&QAction::triggered,this,&PublisherMenu::LogIn);
		logIn->setEnabled(false);
		addAction(logIn);
	}

	void PublisherMenu::DatabaseConnected()
	{
		logIn->setEnabled(true);
	}

	void PublisherMenu::DatabaseDisconnected()
	{
		logIn->setEnabled(false);
	}
}
