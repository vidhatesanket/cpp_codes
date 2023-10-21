#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape
{	
	int len,bre;
	public:
		Rectangle(int,int);
		~Rectangle();
		int Area();
	protected:
};

#endif
