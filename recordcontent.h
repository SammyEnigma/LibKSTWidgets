#pragma once

#include <QTabWidget>
#include "notestab.h"

namespace KSTWidgets
{
	class RecordContent : public QTabWidget
	{
		Q_OBJECT
	public:
		RecordContent(QWidget *parent=nullptr);
	protected:
		NotesTab *notes;
	};
}
