// if we do not override
// the pure virtual function in the derived class, then
// the derived class also becomes an abstract class

#include <iostream>
using namespace std;

class Base {
public:
	// pure virtual function
	virtual void show()=0;
};

class Derived : public Base {
	public:
	void show(){
		cout<<"show";
	}
};

int main(void)
{
	// creating an object of Derived class
	Derived d;
	d.show();
	

	return 0;
}

