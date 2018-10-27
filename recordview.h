#pragma once

#include <QFrame>

namespace KSTWidgets
{
	class RecordView : public QFrame
	{
		Q_OBJECT
	public:
		RecordView(QWidget *parent=nullptr);
		QWidget* Content() const { return content; }
	protected:
		QWidget *title;
		QWidget *content;
	};
}
