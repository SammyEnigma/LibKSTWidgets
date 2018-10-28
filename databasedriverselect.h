#pragma once

#include <QFrame>
#include <QRadioButton>
#include "database.h"

namespace KSTWidgets
{
	class DatabaseDriverSelect : public QFrame
	{
		Q_OBJECT
	public:
		DatabaseDriverSelect(QWidget *parent=nullptr);
	protected:
		QRadioButton *sqlite;
		QRadioButton *mysql;
		QRadioButton *remote;
		void showEvent(QShowEvent *event);
	signals:
		void DriverChanged(KSTDatabase::Driver driver);
	protected slots:
		void SQLiteTriggered(bool checked);
		void MySQLTriggered(bool checked);
		void RemoteTriggered(bool checked);
	};
}
