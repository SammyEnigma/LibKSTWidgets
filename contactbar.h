#pragma once

#include <QFrame>
#include <QLineEdit>
#include "libkstwidgets_global.h"
#include "attachmentbox.h"

namespace KSTWidgets
{
	class LIBKSTWIDGETSSHARED_EXPORT ContactBar : public QFrame
	{
		Q_OBJECT
	public:
		ContactBar(QWidget *parent=nullptr);
	protected:
		QLineEdit *streetNumber;
		QLineEdit *streetName;
		QLineEdit *phone;
		QLineEdit *email;
		AttachmentBox *listing;
	};
}
