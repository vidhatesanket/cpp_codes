//
//#include <iostream>
//using namespace std;
//
//class Complex {
//private:
//	int real, imag;
//
//public:
//	Complex(int r = 0, int i = 0)
//	{
//		real = r;
//		imag = i;
//	}
//
//	// This is automatically called when '+' is used with between two Complex objects
//	Complex operator+(Complex const& obj)
//	{
//		Complex res;
//		res.real = real + obj.real;
//		res.imag = imag + obj.imag;
//		return res;
//	}
//	void print() { cout << real << " + " << imag <<"i"<< '\n'; }
//};
//
//int main()
//{
//	Complex c1(10, 5), c2(2, 4);
//	Complex c3 = c1 + c2;
//	c3.print();
//}



#include<iostream>
using namespace std;
class complex
{
	int real,img;
public:
	complex();
	complex(int,int);
	void display();
	complex operator+(int);
	friend complex operator+(int,complex&);
};
complex::complex()
{}
complex::complex(int real,int img)
{
	this->real=real;
	this->img=img;
}
void complex::display()
{
	if(img>0)
	cout<<"complex number is "<<real<<"+"<<img<<"i"<<endl;
	else
	cout<<"complex number is "<<real<<img<<"i"<<endl;
}
complex complex::operator+(int num)
{
	complex temp;
	temp.real=real + num;
	temp.img=this->img + num;
	return temp;
}
complex operator+(int num,complex& c)
{
	complex temp;
	temp.real=c.real + num;
	temp.img=c.img + num;
	return temp;
}
int main()
{
//	complex c1(1,2);
//	complex c2=c1 + 5;//c2=c1.operator+(int)
//	c2.display();//6+7i;
	
	complex c1(1,2);
	complex c2=5+c1;//  c2=operator+(5,c1)    --->c1+c2= c1.operator-(c2)          
	c2.display();
}
