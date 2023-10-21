#include "Circle.h"
const float pi=3.142f;

Circle::Circle(int r)
{
	radius=r;
	
	
}

int Circle::Area(){
	return pi*radius*radius;
}

Circle::~Circle()
{
}
