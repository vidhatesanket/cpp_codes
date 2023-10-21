#include<iostream>
using namespace std;

class Complex{
	int real,img;
	public:
		Complex(){
			
		}
		Complex(int,int);
		Complex operator++();
		Complex operator++(int);
		void display(){
			cout<<real<<"+"<<img<<"i"<<endl;
		}
};
Complex::Complex(int r,int i){
	real = r;
	img = i;
}
Complex Complex::operator++(){


	
	++this->real;
	++this->img;
	return (*this);
}
Complex Complex::operator++(int){
	Complex obj=(*this);
	++this->real;
	++this->img;
	return obj;
}




int main(){
//	Complex c1(12,14);
//	Complex c2=++c1;
//	c2.display();
//	c1.display();

	
	Complex c1(12,14);
	Complex c2=c1++;
	
	c2.display();
	c1.display();



	return 0;
}
