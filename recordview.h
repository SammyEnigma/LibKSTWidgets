#pragma once

#include <QFrame>
#include <QLabel>
#include <QComboBox>
#include "record.h"

namespace KSTWidgets
{
	class RecordView : public QFrame
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
	public slots:
		void Update(std::vector<KSTEntities::Record> records);
	};
}
