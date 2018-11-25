#pragma once

#include <QDialog>
#include <QLineEdit>
#include "libkstwidgets_global.h"
#include "dialog.h"

namespace KSTWidgets
{
	class LIBKSTWIDGETSSHARED_EXPORT RecordDialog : public Dialog
	{
		Q_OBJECT
	public:
		RecordDialog(QWidget *parent=nullptr);
	protected:
		QLineEdit *name;
	signals:
		void Created(QString name);
	protected slots:
		void Create();
	};
}
