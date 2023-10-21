#include<iostream>
using namespace std;

int main()
{
	int a=10;
	int &_b=a;
	int &_c=a;
	int d=a;
	
	cout<<d<<endl;
	 d = 1000;
	 
	
	cout<<&a<<endl;
	cout<<a<<endl;
	cout<<_b<<endl;
	cout<<_c<<endl;
	_c=20;
	cout<<a<<_b<<_c<<endl;
}
