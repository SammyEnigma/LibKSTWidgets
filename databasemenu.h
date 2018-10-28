#pragma once

#include <QMenu>
#include <QAction>

namespace KSTWidgets
{
	class DatabaseMenu : public QMenu
	{
		Q_OBJECT
	public:
		DatabaseMenu(QWidget *parent=nullptr);
	protected:
		QAction *connect;
		QAction *disconnect;
		QAction *configure;
	signals:
		void Connect();
		void Disconnect();
		void Configure();
	public slots:
		void Configured();
		void Connected();
		void Disconnected();
	};
}
