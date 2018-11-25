#pragma once

#include <QDialog>
#include <QLineEdit>
#include "libkstwidgets_global.h"

namespace KSTWidgets
{
	class LIBKSTWIDGETSSHARED_EXPORT LoginDialog : public QDialog
	{
		Q_OBJECT
	public:
		LoginDialog(QWidget *parent=nullptr);
	protected:
		QLineEdit *username;
		QLineEdit *password;
	signals:
		void LogIn(QString username,QString password);
	};
}
