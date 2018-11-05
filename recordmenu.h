#pragma once

#include <QMenu>
#include <QAction>

namespace KSTWidgets
{
	class RecordMenu : public QMenu
	{
		Q_OBJECT
	public:
		RecordMenu(QWidget *parent=nullptr);
	protected:
		QAction *create;
	signals:
		void Create();
	public slots:
		void Enable();
	};
}
