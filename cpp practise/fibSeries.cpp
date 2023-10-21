#include<iostream>
using namespace std;

class fib{
	int terms;
	int a=0;
	int b=1;
	int* p=&a;
	int* q=&b;
	
	public:
		void get(){
			cout<<"Enter the number of terms upto which you want to print fibonacci series: "<<endl;
			cin>>terms;
		}
		void fib_series(){
			int count=3;
				int result;
				int *r=&result;
				cout<<*p<<" "<<*q<<" ";
			while(count <= terms){
					*r = *p + *q;
					*p=*q;
					*q=*r;
					count++;
					cout<<*r<<" ";
			}
		
			
			
		}
};
int main(){
	
fib f;
f.get();
f.fib_series();



}
