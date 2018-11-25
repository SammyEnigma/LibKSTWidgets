#pragma once

#include <QDialog>
#include <QLineEdit>
#include <QComboBox>
#include "libkstwidgets_global.h"
#include "publisher.h"

namespace KSTWidgets
{
	class LIBKSTWIDGETSSHARED_EXPORT PublisherDialog : public QDialog
	{
	public:
		PublisherDialog(QWidget *parent=nullptr);
	protected:
		QLineEdit *username;
		QLineEdit *firstName;
		QLineEdit *lastName;
		QComboBox *congregation;
	public slots:
		void Update(KSTEntities::Publisher publisher);
	};
}
