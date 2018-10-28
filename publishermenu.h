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
		QAction *edit;
	signals:
		void LogIn();
		void Edit();
	public slots:
		void DatabaseConnected();
		void DatabaseDisconnected();
		void PublisherLoaded();
	};
}
