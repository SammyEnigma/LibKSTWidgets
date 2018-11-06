#include "recordmenu.h"

namespace KSTWidgets
{
	RecordMenu::RecordMenu(QWidget *parent) : QMenu("&Record",parent)
	{
		setEnabled(false);
		create=new QAction("&Create",this);
		connect(create,&QAction::triggered,this,&RecordMenu::Create);
		addAction(create);
		open=new QAction("&Open",this);
		connect(open,&QAction::triggered,this,&RecordMenu::Open);
		addAction(open);
	}

	void RecordMenu::Enable()
	{
		setEnabled(true);
	}
}
