#include<iostream>
using namespace std;

class Complex{
	int real,img;
	public:
		void get(){
			
			cout<<"Enter real and imaginary"<<endl;
			cin>>real>>img;
		}
		void put(){
			cout<<real<<"+"<<img<<"i"<<endl;
			
		}
};


//
//void Complex::display(){
//	cout<<real<<"+"<<img<<"i"<<endl;
//}
int main(){
	int size;
	cout<<"Enter size: "<<endl;
	cin>>size;
	
	Complex array[size];
	for(int i=0;  i < size; i++){
		array[i].get();
	}
	for(int i=0;  i < size; i++){
		array[i].put();
	}

	return 0;
}
