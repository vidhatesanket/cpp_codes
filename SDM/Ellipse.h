#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "Shape.h"

class Ellipse : public Shape
{
	int majorAxis,minorAxis;
	public:
		Ellipse(int,int);
		~Ellipse();
		int Area();
	protected:
		
		
};

#endif
