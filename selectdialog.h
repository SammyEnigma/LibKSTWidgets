#pragma once

#include <QDialog>
#include <QListWidget>
#include "libkstwidgets_global.h"

namespace KSTWidgets
{
	class LIBKSTWIDGETSSHARED_EXPORT SelectDialog : public QDialog
	{
		Q_OBJECT
	public:
		SelectDialog(QString title,QWidget *parent=nullptr);
		void Populate(std::vector<QString> items);
	protected:
		QListWidget *list;
	signals:
		void Selected(const QString item) const;
	};
}
