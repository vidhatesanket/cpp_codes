#include <iostream>
using namespace std;
#include "Point.h"



Point::Point(int xx, int yy) {
	x=xx;
	y=yy;
}

void Point::Display(){
	cout<< "{X="<<x<< ", Y="<<y <<"}";
}
