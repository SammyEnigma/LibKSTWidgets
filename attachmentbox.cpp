#include "attachmentbox.h"

const QString AttachmentBox::newItemText="New...";

AttachmentBox::AttachmentBox(QWidget *parent)
{
	addItem(newItemText);
}

bool AttachmentBox::New() const
{
	return currentText() == newItemText;
}
