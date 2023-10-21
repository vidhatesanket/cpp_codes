#include<iostream>
using namespace std;

class fib{
	int terms;
	int a=0;
	int b=1;
	
	
	public:
		void get(){
			cout<<"Enter the number of terms upto which you want to print fibonacci series: "<<endl;
			cin>>terms;
		}
		void fib_series(){
			int count=3;
				int result;
				cout<<a<<" "<<b<<" ";
			while(count <= terms){
					result = a + b;
					a=b;
					b=result;
					count++;
					cout<<result<<" ";
			}
		
			
			
		}
};
int main(){
	
fib f;
f.get();
f.fib_series();



}
