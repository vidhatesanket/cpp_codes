#include<iostream>
using namespace std;

int main()
{
	int a;
	cout<<"Enter first number:" <<endl;
	cin>>a;
	int b;
	cout<<"Enter second number: "<<endl;
	cin>>b;
	cout<<"Before swapping: "<<endl<<"value of a: "<<a<<" value of b: "<<b<<endl;
	
	int temp = a;
	a=b;
	b=temp;
	
	cout<<"After swapping : "<<endl<<"value of a: "<<a<<" Value of b: "<<b;
	return 0;
}
