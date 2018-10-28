#include <QHBoxLayout>
#include "databasedriverselect.h"
#include "database.h"

namespace KSTWidgets
{
	DatabaseDriverSelect::DatabaseDriverSelect(QWidget *parent) : QFrame(parent)
	{
		setLayout(new QHBoxLayout(this));
		sqlite=new QRadioButton(this);
		sqlite->setText("SQ&Lite");
		layout()->addWidget(sqlite);
		mysql=new QRadioButton(this);
		mysql->setText("&MySQL");
		layout()->addWidget(mysql);
		remote=new QRadioButton(this);
		remote->setText("&Remote");
		layout()->addWidget(remote);

		connect(sqlite,&QRadioButton::toggled,this,&DatabaseDriverSelect::SQLiteTriggered);
		connect(mysql,&QRadioButton::toggled,this,&DatabaseDriverSelect::MySQLTriggered);
		connect(remote,&QRadioButton::toggled,this,&DatabaseDriverSelect::RemoteTriggered);
	}

	void DatabaseDriverSelect::showEvent(QShowEvent *event)
	{
		switch (KSTDatabase::Database::ConfiguredDriver())
		{
		case KSTDatabase::Driver::SQLITE:
			sqlite->setChecked(true);
			break;
		case KSTDatabase::Driver::MYSQL:
			mysql->setChecked(true);
			break;
		case KSTDatabase::Driver::REMOTE:
			remote->setChecked(true);
			break;
		default:
			throw std::runtime_error("Option not available for configured database driver");
		}

		QWidget::showEvent(event);
	}

	void DatabaseDriverSelect::SQLiteTriggered(bool checked)
	{
		if (checked) emit SQLiteSelected();
	}

	void DatabaseDriverSelect::MySQLTriggered(bool checked)
	{
		if (checked) emit MySQLSelected();
	}

	void DatabaseDriverSelect::RemoteTriggered(bool checked)
	{
		if (checked) emit RemoteSelected();
	}
}
