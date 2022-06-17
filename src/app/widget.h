


#ifndef widget_h
#define widget_h

#include <QWidget>
#include <QScrollArea>
#include "paper.h"

class widget : public QWidget
{
	Q_OBJECT
	
private:
	QScrollArea * pscroll;
	paper * base;
	
public:
	widget();
};

#endif