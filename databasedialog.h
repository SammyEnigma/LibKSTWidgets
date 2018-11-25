#pragma once

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include "libkstwidgets_global.h"
#include "databasedriverselect.h"
#include "dialog.h"

namespace KSTWidgets
{
	class LIBKSTWIDGETSSHARED_EXPORT DatabaseDialog : public Dialog
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
