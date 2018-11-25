#pragma once

#include <QMenu>
#include <QAction>
#include "libkstwidgets_global.h"

namespace KSTWidgets
{
	class LIBKSTWIDGETSSHARED_EXPORT DatabaseMenu : public QMenu
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
