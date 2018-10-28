#pragma once

#include <QDialog>
#include <QLineEdit>
#include <QComboBox>
#include "publisher.h"

namespace KSTWidgets
{
	class PublisherDialog : public QDialog
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
