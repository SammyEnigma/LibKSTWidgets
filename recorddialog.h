#pragma once

#include <QDialog>
#include <QLineEdit>
#include "dialog.h"

namespace KSTWidgets
{
	class RecordDialog : public Dialog
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
