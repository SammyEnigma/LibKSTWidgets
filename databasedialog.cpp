#include <QVBoxLayout>
#include <QLabel>
#include <QStringBuilder>
#include "databasedialog.h"
#include "widgettypes.h"
#include "localsqlite.h"

namespace KSTWidgets
{
	DatabaseDialog::DatabaseDialog(QWidget *parent) : QDialog(parent)
	{
		setModal(true);
		setWindowTitle("Database Configuration");
		setLayout(new QVBoxLayout());
		layout()->setAlignment(Qt::AlignTop);
		layout()->addWidget(Label("Database Driver"));
		driver=new DatabaseDriverSelect(this);
		connect(driver,&DatabaseDriverSelect::DriverChanged,this,&DatabaseDialog::DriverChanged);
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
		buttons=new QDialogButtonBox(QDialogButtonBox::Ok|QDialogButtonBox::Cancel,this);
		connect(buttons,&QDialogButtonBox::accepted,[this]() { this->close(); });
		connect(buttons,&QDialogButtonBox::rejected,[this]() { this->close(); });
		layout()->addWidget(buttons);
	}

	QLabel* DatabaseDialog::Label(QString text)
	{
		QLabel *label=new QLabel(this);
		label->setSizePolicy(QSizePolicy(QSizePolicy::MinimumExpanding,QSizePolicy::Maximum));
		label->setText(text);
		label->setStyleSheet("font-weight: bold; color: white; background-color: " % COLOR_SLATE_BLUE % "; padding: 0em 0.5em 0em 0.5em;");
		label->setAlignment(Qt::AlignCenter);
		return label;
	}

	void DatabaseDialog::DriverChanged(KSTDatabase::Driver driver)
	{
		switch (driver)
		{
		case KSTDatabase::Driver::SQLITE:
			sqlitePath->setEnabled(true);
			mysqlUser->setEnabled(false);
			mysqlPass->setEnabled(false);
			remoteURL->setEnabled(false);
			break;
		case KSTDatabase::Driver::MYSQL:
			sqlitePath->setEnabled(false);
			mysqlUser->setEnabled(true);
			mysqlPass->setEnabled(true);
			remoteURL->setEnabled(false);
			break;
		case KSTDatabase::Driver::REMOTE:
			sqlitePath->setEnabled(false);
			mysqlUser->setEnabled(false);
			mysqlPass->setEnabled(false);
			remoteURL->setEnabled(true);
			break;
		default:
			throw std::runtime_error("Unrecognized database driver is configured");
		}
	}
}
