#include<iostream>
using namespace std;

class Complex
{
	int img,real;
	public:
		Complex(){   //------> It's compulsarry to declare default constructor
			
		}
	Complex(int i,int r)
	{
		img=i;
		real=r;
	}
	friend Complex operator+(int,Complex&);
	
	void display();
	
};
Complex operator+(int a,Complex& obj)
{
	Complex temp;
	temp.real=obj.real+a;
	temp.img=obj.img+a;
	return temp;
}

void Complex::display(){
	cout<<real<<"+"<<img<<"i"<<endl;
}
int main()
{
	Complex c1(2,3);                                    
	Complex c2=5+c1;   // c2=operator+(5,c1)
	c2.display();
	return 0;
	
	
	
		
}
