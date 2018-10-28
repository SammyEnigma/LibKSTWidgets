#pragma once

#include <QDialog>
#include <QLineEdit>

namespace KSTWidgets
{
	class LoginDialog : public QDialog
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
