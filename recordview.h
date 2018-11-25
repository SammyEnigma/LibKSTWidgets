#pragma once

#include <QFrame>
#include <QLabel>
#include <QComboBox>
#include "libkstwidgets_global.h"
#include "record.h"
#include "identificationbar.h"

namespace KSTWidgets
{
	class LIBKSTWIDGETSSHARED_EXPORT RecordView : public QFrame
	{
		Q_OBJECT
	public:
		RecordView(QWidget *parent=nullptr);
		QWidget* Content() const { return content; }
	protected:
		QFrame *details;
		QFrame *content;
		QLabel *record;
		QComboBox *listing;
		IdentificationBar *identificationBar;
	signals:
		void CreateHouseholder(QString firstName,QString middleName,QString lastName);
	public slots:
		void Update(std::vector<KSTEntities::Record> records);
	};
}
