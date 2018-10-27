#pragma once

#include <QToolBar>
#include <QLineEdit>
#include "libkstwidgets_global.h"

namespace KSTWidgets
{
	class LIBKSTWIDGETSSHARED_EXPORT IdentificationBar : public QFrame
	{
	public:
		IdentificationBar(QWidget *parent=nullptr);
	protected:
		QLineEdit *firstName;
		QLineEdit *middleName;
		QLineEdit *lastName;
		void SetSizePolicies();
	};
}
