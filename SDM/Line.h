#ifndef LINE_H
#define LINE_H

#include "Shape.h"
#include "Point.h"
class Line : public Shape
{
	public:
		Line();
		Line(Point, Point);
		~Line();
		 void Display();
	
		Point startPoint, endPoint;
};

#endif
