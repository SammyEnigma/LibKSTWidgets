#include <QLabel>
#include <QBoxLayout>
#include "identificationbar.h"

namespace KSTWidgets
{
	IdentificationBar::IdentificationBar(QWidget *parent) : QFrame(parent)
	{
		setWindowTitle("Identification");
		setSizePolicy(QSizePolicy(QSizePolicy::MinimumExpanding,QSizePolicy::Maximum));
		setLayout(new QBoxLayout(QBoxLayout::LeftToRight,this));
		layout()->setSpacing(5);
		QLabel *title=new QLabel("Identification");
		title->setStyleSheet("font-weight: bold; color: white; background-color: #6a5acd; padding: 0em 0.5em 0em 0.5em;");
		title->setAlignment(Qt::AlignCenter);
		layout()->addWidget(title);
		layout()->addWidget(new QLabel("First Name"));
		firstName=new QLineEdit(this);
		layout()->addWidget(firstName);
		layout()->addWidget(new QLabel("Middle Name"));
		middleName=new QLineEdit(this);
		layout()->addWidget(middleName);
		layout()->addWidget(new QLabel("Last Name"));
		lastName=new QLineEdit(this);
		layout()->addWidget(lastName);
		SetSizePolicies();
	}

	void IdentificationBar::SetSizePolicies()
	{
		QSizePolicy policy=firstName->sizePolicy();
		policy.setHorizontalStretch(2);
		firstName->setSizePolicy(policy);
		lastName->setSizePolicy(policy);
		policy.setHorizontalStretch(1);
		middleName->setSizePolicy(policy);
	}
}
