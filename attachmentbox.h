#pragma once

#include <QComboBox>
#include <QString>

class AttachmentBox : public QComboBox
{
public:
	AttachmentBox(QWidget *parent=nullptr);
	bool New() const;
protected:
	static const QString newItemText;
};
