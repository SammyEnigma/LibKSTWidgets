#pragma once

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QDialogButtonBox>
#include "databasedriverselect.h"

namespace KSTWidgets
{
	class DatabaseDialog : public QDialog
	{
		Q_OBJECT
	public:
		DatabaseDialog(QWidget *parent=nullptr);
	protected:
		QDialogButtonBox *buttons;
		DatabaseDriverSelect *driver;
		QLineEdit *sqlitePath;
		QLineEdit *mysqlUser;
		QLineEdit *mysqlPass;
		QLineEdit *remoteURL;
		QLabel* Label(QString text);
	protected slots:
		void SQLiteSelected();
		void MySQLSelected();
		void RemoteSelected();
	};
}
