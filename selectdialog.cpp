#include <QVBoxLayout>
#include "selectdialog.h"

namespace KSTWidgets
{
	SelectDialog::SelectDialog(QString title,QWidget *parent) : QDialog(parent)
	{
		setModal(true);
		setWindowTitle(title);
		setLayout(new QVBoxLayout());
		layout()->setAlignment(Qt::AlignTop);
		list=new QListWidget(this);
		connect(list,&QListWidget::itemDoubleClicked,[this](QListWidgetItem *item) {
			emit Selected(item->text());
			close();
			deleteLater();
		});
		layout()->addWidget(list);
	}

	void SelectDialog::Populate(std::vector<QString> items)
	{
		for (const QString& item : items)
		{
			list->addItem(item);
		}
	}
}
