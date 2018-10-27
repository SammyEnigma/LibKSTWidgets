#pragma once

#include <QFrame>
#include <QLineEdit>

namespace KSTWidgets
{
	class ContactBar : public QFrame
	{
		Q_OBJECT
	public:
		ContactBar(QWidget *parent=nullptr);
	protected:
		QLineEdit *street;
		QLineEdit *phone;
	};
}
