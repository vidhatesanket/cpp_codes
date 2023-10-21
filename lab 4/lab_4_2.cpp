#include<iostream>
using namespace std;

void swap(int &, int &);

int main()
{
	int a,b;
	cout<<"Enter the value of A and B:"<<endl;
	cin>>a>>b;
	cout<<"Before swap: "<<a<<" "<<b<<endl;
	swap(a,b);
		cout<<"After swap:"<<a<<" "<<b<<endl;
	
}
void swap(int &p,int &q)
{
	int temp;
	temp=p;
	p=q;
	q=temp;
	
}

