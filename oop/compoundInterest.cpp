#include<iostream>
#include<Math.h>
using namespace std;
int main(){
	
	int amount,rate,period;
	
	cout<<"Enter the principal amount: "<<endl;
	cin>>amount;
	cout<<"Enter the rate of interest: "<<endl;
	cin>>rate;
	cout<<"Enter the time period: "<<endl;
	cin>>period;
	

	double a=(rate+100.0)/100.0;
	double Result =pow(a,period);
	double result=Result*amount;
	

	
	cout<<"compound interest = "<<result-amount;
	 return 0;
}
