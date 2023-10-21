#include "Ellipse.h"
const float pi=3.142f;

Ellipse::Ellipse(int a, int b)
{
	majorAxis=a;
	minorAxis=b;
}
int Ellipse::Area(){
	return majorAxis*minorAxis*pi;
}


Ellipse::~Ellipse()
{
}
