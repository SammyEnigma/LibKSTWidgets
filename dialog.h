#pragma once

#include <QDialog>
#include <QLabel>

namespace KSTWidgets
{
	class Dialog : public QDialog
	{
	public:
		Dialog(QWidget *parent=nullptr) : QDialog(parent) { }
	protected:
		QLabel* Label(QString text);
	};
}
