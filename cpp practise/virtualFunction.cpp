#include<iostream>
using namespace std;

class Employee{
	
	int id = 108;
	public:
	virtual void show(){
			cout<<"ID of employee: "<<id<<endl;
		}
		
};

class salesMan:public Employee{
	int salary = 100000;
	
	public:
		void show(){
			cout<<"ID of employee: "<<salary<<endl;
		}
};

int main(){
	
	Employee* s = new Employee();
	
	s->show();
	
}
