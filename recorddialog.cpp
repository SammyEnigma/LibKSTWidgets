#include <QVBoxLayout>
#include <QDialogButtonBox>
#include <QMessageBox>
#include "recorddialog.h"
#include "widgettypes.h"

namespace KSTWidgets
{
	RecordDialog::RecordDialog(QWidget *parent) : Dialog(parent)
	{
		setModal(true);
		setWindowTitle("Create Record");
		setLayout(new QVBoxLayout());
		layout()->setAlignment(Qt::AlignTop);
		layout()->addWidget(Label("Name"));
		name=new QLineEdit(this);
		layout()->addWidget(name);
		QDialogButtonBox *buttons=new QDialogButtonBox(QDialogButtonBox::Ok|QDialogButtonBox::Cancel,this);
		connect(buttons,&QDialogButtonBox::accepted,this,&RecordDialog::Create);
		connect(buttons,&QDialogButtonBox::rejected,[this]() { this->close(); });
		layout()->addWidget(buttons);
	}

	void RecordDialog::Create()
	{
		if (name->text().isEmpty())
		{
			QMessageBox::warning(this,ENTRY_INVALID,"Please enter a name for the record.");
		}
		else
		{
			emit Created(name->text());
			this->close();
		}
	}
}
