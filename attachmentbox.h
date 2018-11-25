#pragma once

#include <QComboBox>
#include <QString>
#include "libkstwidgets_global.h"

namespace KSTWidgets
{
	class LIBKSTWIDGETSSHARED_EXPORT AttachmentBox : public QComboBox
	{
	public:
		AttachmentBox(QWidget *parent=nullptr);
		bool New() const;
	protected:
		static const QString newItemText;
	};
}
