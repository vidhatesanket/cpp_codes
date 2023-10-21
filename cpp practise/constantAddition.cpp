#include<iostream>
using namespace std;

class Complex{
	int real,img;
	public:
		Complex(){
			cout<<"Default constructor: "<<endl;
		}
		Complex(int,int);
		friend Complex operator+(int, Complex&);

		void display();
};
Complex::Complex(int r,int i){
	real = r;
	img = i;
}

Complex operator+(int a, Complex& c){
	Complex obj;
	obj.real = a+c.real;
	obj.img=a+c.img;
	return obj;
	
}
void Complex::display(){
	cout<<real<<"+"<<img<<"i"<<endl;
}
int main(){
	Complex c1(23,45);
//	Complex c2(34,67);
	Complex c3 ;
	c3= 5 + c1;
	c3.display();
	
	return 0;
}
