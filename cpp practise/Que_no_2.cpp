#include<iostream>
using namespace std;
template<class X,class Y>
char swap(X a,Y b)
{
	Y temp;
	temp=b;
	b=a;
	a=temp;
	cout<<"two elements after swapping: "<<a<<" "<<b<<endl;

	
}
int main()
{
	int ele1;
	char ele2;
	cout<<"Enter the Elements you wants to swap :"<<endl;
	cout <<"Enter the Integer element: "<<endl;
	cin>>ele1;
	cout<<"Enetr the Character element: "<<endl;
	cin>>ele2;
	
	cout<<"two elements before swapping: "<<ele1<<" "<<ele2<<endl;
	
	 swap(ele1,ele2);
	
	
}
