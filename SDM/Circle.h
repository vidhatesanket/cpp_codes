#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"
#include"Point.h"

class Circle : public Shape
{
	int radius;
	
	
	public:
		Circle(int);
		~Circle();
		int Area();
		
	protected:
};

#endif
