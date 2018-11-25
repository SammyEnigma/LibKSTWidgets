#include "attachmentbox.h"

namespace KSTWidgets
{
	const QString AttachmentBox::newItemText="<New...>";

	AttachmentBox::AttachmentBox(QWidget *parent) : QComboBox(parent)
	{
		addItem(newItemText);
	}

	bool AttachmentBox::New() const
	{
		return currentText() == newItemText;
	}
}
