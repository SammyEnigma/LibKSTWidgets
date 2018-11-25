#pragma once

#include <QTabWidget>
#include "libkstwidgets_global.h"
#include "notestab.h"

namespace KSTWidgets
{
	class LIBKSTWIDGETSSHARED_EXPORT RecordContent : public QTabWidget
	{
		Q_OBJECT
	public:
		RecordContent(QWidget *parent=nullptr);
	protected:
		NotesTab *notes;
	};
}
