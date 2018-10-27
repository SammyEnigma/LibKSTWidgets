#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGridLayout>
#include <QLabel>
#include <QComboBox>
#include "recordview.h"
#include "recordcontent.h"
#include "identificationbar.h"
#include "contactbar.h"

namespace KSTWidgets
{
	RecordView::RecordView(QWidget *parent) : QFrame(parent)
	{
		setLayout(new QVBoxLayout(this));

		title=new QFrame(this);
		title->setSizePolicy(QSizePolicy(QSizePolicy::MinimumExpanding,QSizePolicy::Maximum));
		title->setLayout(new QHBoxLayout(title));
		QLabel *recordTitle=new QLabel("<b>Record Title</b>");
		recordTitle->setAlignment(Qt::AlignCenter);
		title->layout()->addWidget(recordTitle);
		title->layout()->addWidget(new QComboBox(title));
		layout()->addWidget(title);

		content=new QFrame(this);
		content->setSizePolicy(QSizePolicy(QSizePolicy::MinimumExpanding,QSizePolicy::MinimumExpanding));
		content->setLayout(new QGridLayout(content));
		layout()->addWidget(content);

		((QGridLayout*)content->layout())->addWidget(new IdentificationBar(content),0,0,1,2);
		((QGridLayout*)content->layout())->addWidget(new RecordContent(content),1,0,1,1);
		((QGridLayout*)content->layout())->addWidget(new ContactBar(content),1,1,1,1);
	}
}
