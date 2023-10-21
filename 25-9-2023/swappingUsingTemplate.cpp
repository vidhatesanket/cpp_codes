#include<iostream>
using namespace std;

template <class temp>
void swap_a(temp& a, temp& b){
	
	temp t = a;
	a=b;
	b=t;
}

int main(){
	
	int a;
	int b;
	cout<<"Enter the value of a & b: "<<endl;
	cin>>a>>b;
	cout<<"Value of a and b before swapping:  a = "<< a <<"  b= "<<b<<endl;
	swap_a(a,b);
	cout<<"Value of a and b after swapping:  a= "<< a <<"  b="<<b<<endl;
}
