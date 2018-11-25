#pragma once

#include <QWidget>
#include <QStatusBar>
#include <QLabel>
#include <QSizeGrip>
#include "libkstwidgets_global.h"

namespace KSTWidgets
{
	class LIBKSTWIDGETSSHARED_EXPORT NotificationBar : public QStatusBar
	{
		Q_OBJECT
	public:
		explicit NotificationBar(QWidget *parent = nullptr);
	protected:
		QLabel message;
	};
}
