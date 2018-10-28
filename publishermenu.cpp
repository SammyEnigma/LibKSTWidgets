#include "publishermenu.h"

namespace KSTWidgets
{
	PublisherMenu::PublisherMenu(QWidget *parent) : QMenu("&Publisher",parent)
	{
		logIn=new QAction("&Log In",this);
		connect(logIn,&QAction::triggered,this,&PublisherMenu::LogIn);
		addAction(logIn);
	}
}
