#pragma once

#include <QMenu>
#include <QAction>

namespace KSTWidgets
{
	class PublisherMenu : public QMenu
	{
		Q_OBJECT
	public:
		PublisherMenu(QWidget *parent=nullptr);
	protected:
		QAction *logIn;
	signals:
		void LogIn();
	public slots:
		void DatabaseConnected();
		void DatabaseDisconnected();
	};
}
