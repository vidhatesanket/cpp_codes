#include<iostream>
using namespace std;
class a
{
	int p;
public:
	a()
	{
		cout<<"in default of a class\n";
	}
	
};
class b:virtual public a // Only one copy of its data members is shared by all the base classes that use the virtual base class.
{
	int q;
public:
	b()
	{
		cout<<"in default of b class\n";
	}
};
class c:virtual public a
{
	int r;
public:
	c()
	{
		cout<<"in default of c class\n";
	}
};
class d:public b,public c
{
	int s;
public:
	d()
	{
		cout<<"in default of d class\n";
	}
};
int main()
{
	d obj;
}

