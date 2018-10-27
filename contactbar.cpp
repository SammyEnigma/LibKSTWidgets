#include <QBoxLayout>
#include <QLabel>
#include "contactbar.h"

namespace KSTWidgets
{
	ContactBar::ContactBar(QWidget *parent) : QFrame(parent)
	{
		setWindowTitle("Contact");
		setSizePolicy(QSizePolicy(QSizePolicy::Maximum,QSizePolicy::MinimumExpanding));
		setLayout(new QBoxLayout(QBoxLayout::TopToBottom,this));
		layout()->setSpacing(5);
		layout()->setAlignment(Qt::AlignTop);
		//SetSizePolicies();
		QLabel *title=new QLabel("Contact");
		title->setSizePolicy(QSizePolicy(QSizePolicy::MinimumExpanding,QSizePolicy::Maximum));
		title->setStyleSheet("font-weight: bold; color: white; background-color: #fa8072; padding: 0.5em 0.5em 0.5em 0.5em;");
		title->setAlignment(Qt::AlignCenter);
		layout()->addWidget(title);
		layout()->addWidget(new QLabel("Street Name",this));
		street=new QLineEdit(this);
		layout()->addWidget(street);
		layout()->addWidget(new QLabel("Phone Number",this));
		phone=new QLineEdit(this);
		phone->setInputMask("(999) 999-9999");
		layout()->addWidget(phone);
	}
}
