#include "Square.h"

Square::Square(int a)
{
	side=a;
	
}
int Square::Area()
{
	return side*side;
}

Square::~Square()
{
}
