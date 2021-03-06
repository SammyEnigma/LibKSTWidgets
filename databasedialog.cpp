#include <QVBoxLayout>
#include <QLabel>
#include <QStringBuilder>
#include <QDialogButtonBox>
#include "databasedialog.h"
#include "widgettypes.h"
#include "localsqlite.h"

namespace KSTWidgets
{
	DatabaseDialog::DatabaseDialog(QWidget *parent) : Dialog(parent)
	{
		setModal(true);
		setWindowTitle("Database Configuration");
		setLayout(new QVBoxLayout());
		layout()->setAlignment(Qt::AlignTop);
		layout()->addWidget(Label("Database Driver"));
		driver=new DatabaseDriverSelect(this);
		connect(driver,&DatabaseDriverSelect::SQLiteSelected,this,&DatabaseDialog::SQLiteSelected);
		connect(driver,&DatabaseDriverSelect::MySQLSelected,this,&DatabaseDialog::MySQLSelected);
		connect(driver,&DatabaseDriverSelect::RemoteSelected,this,&DatabaseDialog::RemoteSelected);
		layout()->addWidget(driver);
		layout()->addWidget(Label("SQLite"));
		layout()->addWidget(new QLabel("File Path",this));
		sqlitePath=new QLineEdit(this);
		sqlitePath->setText(KSTDatabase::LocalSQLite::Path());
		sqlitePath->setEnabled(false);
		layout()->addWidget(sqlitePath);
		layout()->addWidget(Label("MySQL"));
		layout()->addWidget(new QLabel("Username",this));
		mysqlUser=new QLineEdit(this);
		mysqlUser->setEnabled(false);
		layout()->addWidget(mysqlUser);
		layout()->addWidget(new QLabel("Password",this));
		mysqlPass=new QLineEdit(this);
		mysqlPass->setEnabled(false);
		layout()->addWidget(mysqlPass);
		layout()->addWidget(Label("Remote Server"));
		layout()->addWidget(new QLabel("Server URL",this));
		remoteURL=new QLineEdit(this);
		remoteURL->setEnabled(false);
		layout()->addWidget(remoteURL);
		QDialogButtonBox *buttons=new QDialogButtonBox(QDialogButtonBox::Ok|QDialogButtonBox::Cancel,this);
		connect(buttons,&QDialogButtonBox::accepted,[this]() { this->close(); });
		connect(buttons,&QDialogButtonBox::rejected,[this]() { this->close(); });
		layout()->addWidget(buttons);
	}

	void DatabaseDialog::SQLiteSelected()
	{
		sqlitePath->setEnabled(true);
		mysqlUser->setEnabled(false);
		mysqlPass->setEnabled(false);
		remoteURL->setEnabled(false);
	}

	void DatabaseDialog::MySQLSelected()
	{
		sqlitePath->setEnabled(false);
		mysqlUser->setEnabled(true);
		mysqlPass->setEnabled(true);
		remoteURL->setEnabled(false);
	}

	void DatabaseDialog::RemoteSelected()
	{
		sqlitePath->setEnabled(false);
		mysqlUser->setEnabled(false);
		mysqlPass->setEnabled(false);
		remoteURL->setEnabled(true);
	}
}
