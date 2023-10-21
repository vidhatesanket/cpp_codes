#include<iostream>
using namespace std;

class Complex{
	int real,img;
	public:
		Complex(){
			
		}
		Complex(int,int);
		Complex operator-(Complex&);
		void display();
};
Complex::Complex(int r,int i){
	real = r;
	img = i;
}

Complex Complex::operator-(Complex& c){
	Complex obj;
	obj.real = real-c.real;
	obj.img=img-c.img;
	return obj;
	
}
void Complex::display(){
	cout<<real<<"+"<<img<<"i"<<endl;
}
int main(){
	Complex c1(23,45);
	Complex c2(34,67);
	Complex c3 ;
	c3= c1 - c2;
	c3.display();
	
	return 0;
}
