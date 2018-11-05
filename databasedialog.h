#pragma once

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include "databasedriverselect.h"
#include "dialog.h"

namespace KSTWidgets
{
	class DatabaseDialog : public Dialog
	{
		Q_OBJECT
	public:
		DatabaseDialog(QWidget *parent=nullptr);
	protected:
		DatabaseDriverSelect *driver;
		QLineEdit *sqlitePath;
		QLineEdit *mysqlUser;
		QLineEdit *mysqlPass;
		QLineEdit *remoteURL;
	protected slots:
		void SQLiteSelected();
		void MySQLSelected();
		void RemoteSelected();
	};
}
