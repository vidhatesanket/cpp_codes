#include<iostream>
using namespace std;

class Computer 
{
	
	int local;

	public:
		Computer(){
			cout<<"In default constructor of class Computer. "<<endl;
//			local=15;
		}


		Computer(int a){
			cout<<"Parameterized constructor of class Computer. "<<endl;
			local = a;
			
	
		}
		friend void display(const Computer&);
	
};

void display(const Computer& obj)
{
		
//		Computer obj;
//		cout<<"By using object as a reference"<<obj1.local<<endl;
		cout<<"Value of a: "<<obj.local<<endl;
		
	
}


class Printer_1{
	
	int abc;
	
	public:
	
		
	Printer_1(){
		cout<<"In default constructor of class Printer_1"<<endl;
		
	}
	
	Printer_1(int b){
		abc=b;
		cout<<"Parameterized constructor of class Printer_1 "<<endl;
		
	}
	friend void show();

};

void show(){
	Printer_1 bobj;
	cout<<"Value of Printer_1: "<<bobj.abc<<endl;
}



class Printer_2: public Computer,public Printer_1{
	int cval;
	public:
		
	Printer_2(){
		cout<<"In default constructor of class C"<<endl;
	}
//	
	Printer_2(int a,int b,int c):Computer(a),Printer_1(b){
		cval=c;
		cout<<"Parameterized constructor of class Printer_2 "<<endl;
		
	}
	friend void cShow();
	
	
	
};
void cShow(){
			Printer_2 cobj;
			cout<<"Value of Printer_2: "<<cobj.cval<<endl;

	
}
int main(){
	
	Printer_2 bobj(15,20,25);
	Computer c1(20);
	display(c1);
//	display();
//	show();
//	cShow();

	
	return 0;
}
