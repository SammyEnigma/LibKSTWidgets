#include <QDialog>
#include "dialog.h"
#include "widgettypes.h"

namespace KSTWidgets
{
	QLabel* Dialog::Label(QString text)
	{
		QLabel *label=new QLabel(this);
		label->setSizePolicy(QSizePolicy(QSizePolicy::MinimumExpanding,QSizePolicy::Maximum));
		label->setText(text);
		label->setStyleSheet(QString(DIALOG_DIVIDER).arg(COLOR_SLATE_BLUE));
		label->setAlignment(Qt::AlignCenter);
		return label;
	}
}
