#pragma once

#include <QMenu>
#include <QAction>
#include "libkstwidgets_global.h"

namespace KSTWidgets
{
	class LIBKSTWIDGETSSHARED_EXPORT RecordMenu : public QMenu
	{
		Q_OBJECT
	public:
		RecordMenu(QWidget *parent=nullptr);
	protected:
		QAction *create;
		QAction *open;
	signals:
		void Create();
		void Open();
	public slots:
		void Enable();
	};
}
