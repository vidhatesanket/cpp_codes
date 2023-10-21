#include<iostream>
using namespace std;
void show(int p, int q){
	cout<<"Value of p: "<<p<<" Value of q: "<<q<<endl;
}

//template <class T>   if we only declare one class for two diffrent datatypes then 
template <class x, class y>
void display(x a, y b){
	cout<<"Value of a: "<<a<<"Value of b: "<<b<<endl;
}
int main(){
	
	int a=10;
	char b='c';
	show(a,b);
	
	display(a,b);
	
	return 0;
}
