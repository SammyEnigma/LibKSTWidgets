#pragma once

#include <QDialog>
#include <QLabel>
#include "libkstwidgets_global.h"

namespace KSTWidgets
{
	class LIBKSTWIDGETSSHARED_EXPORT Dialog : public QDialog
	{
	public:
		Dialog(QWidget *parent=nullptr) : QDialog(parent) { }
	protected:
		QLabel* Label(QString text);
	};
}
