#pragma once

#include <QMenu>
#include <QAction>

namespace KSTWidgets
{
	class DatabaseMenu : public QMenu
	{
	public:
		DatabaseMenu(QWidget *parent=nullptr);
	protected:
		QAction *connect;
		QAction *disconnect;
		QAction *configure;
	public slots:
		void Configured();
		void Connected();
		void Disconnected();
	};
}
