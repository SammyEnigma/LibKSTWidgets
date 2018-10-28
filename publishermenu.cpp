#include "publishermenu.h"

namespace KSTWidgets
{
	PublisherMenu::PublisherMenu(QWidget *parent) : QMenu("&Publisher",parent)
	{
		logIn=new QAction("&Log In",this);
		connect(logIn,&QAction::triggered,this,&PublisherMenu::LogIn);
		logIn->setEnabled(false);
		addAction(logIn);
		edit=new QAction("&Edit",this);
		connect(edit,&QAction::triggered,this,&PublisherMenu::Edit);
		edit->setEnabled(false);
		addAction(edit);
	}

	void PublisherMenu::DatabaseConnected()
	{
		logIn->setEnabled(true);
	}

	void PublisherMenu::DatabaseDisconnected()
	{
		logIn->setEnabled(false);
		edit->setEnabled(false);
	}

	void PublisherMenu::PublisherLoaded()
	{
		edit->setEnabled(true);
	}
}
