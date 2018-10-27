#pragma once

#include <QWidget>
#include <QStatusBar>
#include <QLabel>
#include <QSizeGrip>

namespace KSTWidgets
{
	class NotificationBar : public QStatusBar
	{
		Q_OBJECT
	public:
		explicit NotificationBar(QWidget *parent = nullptr);
	protected:
		QLabel message;
	};
}
