#include <iostream>
using namespace std;
float division(int p, int q){
	if (q==0){
			throw "Attempted to divide by zero ";
	}
	return (p/q);
}

class demo {
	int num;

public:
	demo(){
		int a,b;
		float k;
	
		cout<<"Enter the values of a and b: "<<endl;
		cin>>a>>b;
		
		try{
			k=division(a,b);
			cout<<"Result : "<<k;
			}
		catch(const char* c){
			cout<<c<<endl;
			}
	}

	void show(){
		cout << "Num = " << num << endl;
		}
		
};

int main()
{
	

	demo d;
	
	cout << "Again creating object \n";
	cout<<"Enter the number: "<<endl;
	
	demo c;
}

