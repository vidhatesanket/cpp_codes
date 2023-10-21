#include<iostream>
using namespace std;
template<class X,class Y>
float add(X& a,Y& b)
{
	return a+b;
}

int main()
 {
   int a=10;
   float b=20.25;
   
   cout<<" a+b = "<<add(a,b)<<endl;
   
   
   
  
}
