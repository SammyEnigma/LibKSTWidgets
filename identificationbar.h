#pragma once

#include <QToolBar>
#include <QLineEdit>
#include "libkstwidgets_global.h"
#include "attachmentbox.h"

namespace KSTWidgets
{
	class LIBKSTWIDGETSSHARED_EXPORT IdentificationBar : public QFrame
	{
		Q_OBJECT
	public:
		IdentificationBar(QWidget *parent=nullptr);
	protected:
		QLineEdit *firstName;
		QLineEdit *middleName;
		QLineEdit *lastName;
		AttachmentBox *listing;
		void SetSizePolicies();
		void AddHouseholder();
		void EditHouseholder();
	signals:
		void Create(QString firstName,QString middleName,QString lastName);
	protected slots:
		void Edits();
	};
}
