#include <iostream>
#include"Rectangle.h"
#include "Ellipse.h"
#include"Square.h"
#include"Point.h"
#include"Circle.h"
#include"Line.h"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Rectangle r(10,15);
	cout<<"Area of Rectangle: "<<r.Area()<<endl;
	
	Ellipse e(12,14);
	cout<<"Area of Ellipse: "<<e.Area()<<endl;
	
	Square s(15);
	cout<<"Area of Square: "<<s.Area()<<endl;
	

	Circle c(5);
	cout<<"Area of circle: "<<c.Area()<<endl;  
	
	
	Point p1(12,23);
	p1.Display();
	Point p2(45,87);
	p2.Display();
	
	
	Line l1(p1,p2);
	l1.Display();
	
	return 0;
	
	
}
