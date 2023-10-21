#include<iostream>
using namespace std;

float division(int p, int q){
	if (q==0){
			throw "Attempted to divide by zero ";
	}
	return (p/q);
}

int main(){
	
	int a,b;
	float k;
	
	cout<<"Enter the values of a and b: "<<endl;
	cin>>a>>b;
	
	try{
		k=division(a,b);
		cout<<"Result : "<<k;
	}
	catch(const char* c){
		cout<<c<<endl;
	}
	
	return 0;
}
