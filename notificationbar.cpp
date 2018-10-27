#include "notificationbar.h"

namespace KSTWidgets
{
	NotificationBar::NotificationBar(QWidget *parent) : QStatusBar(parent)
	{
		addPermanentWidget(&message);
		addPermanentWidget(new QSizeGrip(this));
	}
}
