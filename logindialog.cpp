#include <QVBoxLayout>
#include <QLabel>
#include <QDialogButtonBox>
#include "logindialog.h"

namespace KSTWidgets
{
	LoginDialog::LoginDialog(QWidget *parent) : QDialog(parent)
	{
		setModal(true);
		setWindowTitle("Log In");
		setLayout(new QVBoxLayout());
		layout()->setAlignment(Qt::AlignTop);
		layout()->addWidget(new QLabel("Username",this));
		username=new QLineEdit(this);
		layout()->addWidget(username);
		layout()->addWidget(new QLabel("Password",this));
		password=new QLineEdit(this);
		password->setEchoMode(QLineEdit::Password);
		layout()->addWidget(password);
		QDialogButtonBox *buttons=new QDialogButtonBox(QDialogButtonBox::Ok|QDialogButtonBox::Cancel,this);
		connect(buttons,&QDialogButtonBox::accepted,[this]() {
			emit LogIn(username->text(),password->text());
			this->close();
		});
		connect(buttons,&QDialogButtonBox::rejected,[this]() { this->close(); });
		layout()->addWidget(buttons);
	}
}
