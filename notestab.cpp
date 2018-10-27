#include <QGridLayout>
#include "notestab.h"

namespace KSTWidgets
{
	NotesTab::NotesTab(QWidget *parent) : QFrame(parent)
	{
		setLayout(new QGridLayout(this));
		layout()->addWidget(new QPlainTextEdit(this));
	}
}
