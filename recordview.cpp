#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGridLayout>
#include <QLabel>
#include <QComboBox>
#include <QStringBuilder>
#include "recordview.h"
#include "recordcontent.h"
#include "identificationbar.h"
#include "contactbar.h"

namespace KSTWidgets
{
	RecordView::RecordView(QWidget *parent) : QFrame(parent)
	{
		setLayout(new QVBoxLayout(this));

		details=new QFrame(this);
		details->setSizePolicy(QSizePolicy(QSizePolicy::MinimumExpanding,QSizePolicy::Maximum));
		details->setLayout(new QHBoxLayout(details));
		record=new QLabel("");
		record->setAlignment(Qt::AlignCenter);
		details->layout()->addWidget(record);
		listing=new QComboBox(record);
		details->layout()->addWidget(listing);
		layout()->addWidget(details);

		content=new QFrame(this);
		content->setSizePolicy(QSizePolicy(QSizePolicy::MinimumExpanding,QSizePolicy::MinimumExpanding));
		content->setLayout(new QGridLayout(content));
		layout()->addWidget(content);

		identificationBar=new IdentificationBar(content);
		connect(identificationBar,&IdentificationBar::Create,this,&RecordView::CreateHouseholder);
		((QGridLayout*)content->layout())->addWidget(identificationBar,0,0,1,2);
		((QGridLayout*)content->layout())->addWidget(new RecordContent(content),1,0,1,1);
		((QGridLayout*)content->layout())->addWidget(new ContactBar(content),1,1,1,1);
	}

	void RecordView::Update(std::vector<KSTEntities::Record> records)
	{
		record->setText("<b>" % records.at(0).Name() % "</b>");
		listing->clear();
		for (const KSTEntities::Record& record : records)
		{
			listing->addItem(record.Identity().FullName(),record.ID());
		}
	}
}
