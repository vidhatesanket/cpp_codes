#include "Rectangle.h"
#include<iostream>
using namespace std;

Rectangle::Rectangle(int l,int b)
{
	len=l;
	bre=b;
}
int Rectangle::Area(){
	return len*bre;
}

Rectangle::~Rectangle()
{
}
