#include <QLabel>
#include <QBoxLayout>
#include "identificationbar.h"

namespace KSTWidgets
{
	IdentificationBar::IdentificationBar(QWidget *parent) : QToolBar(parent)
	{
		setWindowTitle("Identification");
		layout()->setSpacing(5);
		SetSizePolicies();
		addWidget(new QLabel("Identification"));
		addWidget(new QLabel("First Name"));
		addWidget(&firstName);
		addWidget(new QLabel("Middle Name"));
		addWidget(&middleName);
		addWidget(new QLabel("Last Name"));
		addWidget(&lastName);
	}

	void IdentificationBar::SetSizePolicies()
	{
		QSizePolicy policy=firstName.sizePolicy();
		policy.setHorizontalStretch(2);
		firstName.setSizePolicy(policy);
		lastName.setSizePolicy(policy);
		policy.setHorizontalStretch(1);
		middleName.setSizePolicy(policy);
	}
}
