#include "recordcontent.h"

namespace KSTWidgets
{
	RecordContent::RecordContent(QWidget *parent) : QTabWidget(parent)
	{
		setSizePolicy(QSizePolicy(QSizePolicy::MinimumExpanding,QSizePolicy::MinimumExpanding));
		notes=new NotesTab(this);
		addTab(notes,"Notes");
	}
}
