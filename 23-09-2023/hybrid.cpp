#include<iostream>
using namespace std;

class A{
	public:
		A(){
			cout<<"Default A: "<<endl;
		}
		~A(){
			cout<<"Destructor  A: "<<endl;
		}
};

class B:virtual public A{
	
	public:
		B(){
			cout<<"Default B: "<<endl;
		}
		~B(){
			cout<<"Destructor B: "<<endl;
		}
};

class C:virtual public A{
	
	public:
		C(){
			cout<<"Default C:"<<endl;
		}
		~C(){
			cout<<"Destructor C:"<<endl;
		}
	
};
int main(){
	C cobj;
	
	return 0;
}
