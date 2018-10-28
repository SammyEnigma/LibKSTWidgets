#include <QLabel>
#include <QVBoxLayout>
#include <QDialogButtonBox>
#include "publisherdialog.h"

namespace KSTWidgets
{
	PublisherDialog::PublisherDialog(QWidget *parent) : QDialog(parent)
	{
		setModal(true);
		setWindowTitle("Edit Publisher");
		setLayout(new QVBoxLayout());
		layout()->setAlignment(Qt::AlignTop);
		layout()->addWidget(new QLabel("Username",this));
		username=new QLineEdit(this);
		layout()->addWidget(username);
		layout()->addWidget(new QLabel("First Name",this));
		firstName=new QLineEdit(this);
		layout()->addWidget(firstName);
		layout()->addWidget(new QLabel("Last Name",this));
		lastName=new QLineEdit(this);
		layout()->addWidget(lastName);
		layout()->addWidget(new QLabel("Congregation",this));
		congregation=new QComboBox(this);
		layout()->addWidget(congregation);
		QDialogButtonBox *buttons=new QDialogButtonBox(QDialogButtonBox::Ok|QDialogButtonBox::Cancel,this);
		connect(buttons,&QDialogButtonBox::accepted,[this]() { this->close(); });
		connect(buttons,&QDialogButtonBox::rejected,[this]() { this->close(); });
		layout()->addWidget(buttons);
	}

	void PublisherDialog::Update(KSTEntities::Publisher publisher)
	{
		username->setText(publisher.Username());
		firstName->setText(publisher.FirstName());
		lastName->setText(publisher.LastName());
	}
}
