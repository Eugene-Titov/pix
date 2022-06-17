


#include "widget.h"
#include <QVBoxLayout>

widget :: widget()
{
	base = new paper;

	pscroll = new QScrollArea(this);
	pscroll->setBackgroundRole(QPalette::Dark);
	pscroll->setWidget(base);

	QVBoxLayout * v = new QVBoxLayout(this);
	v->addWidget(pscroll);

	resize(400, 300);
	show();
}