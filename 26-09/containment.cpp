#include <iostream>  
using namespace std;  

class cDate{
	int mDay,mMonth,mYear;
	
	public:
		cDate(){
			mDay=10;
			mMonth=11;
			mYear=1999;
		}
		cDate(int d,int m, int y){
			mDay=d;
			mMonth=m;
			mYear=y;
		}
		void display(){
			cout<<mDay<<"/"<<mMonth<<"/"<<mYear<<endl;
		}
};

class cEmployee{
	int mId;
	int basicSalary;
	cDate mBdate;
	
	public:
		cEmployee(){
			mId= 1;
			basicSalary=10000;
			mBdate=cDate();
		}
		cEmployee(int,int,int,int,int);
		void display();
		
};
	cEmployee::cEmployee(int i,int sal,int d,int m,int y):mBdate(d,m,y){
		mId=i;
		basicSalary=sal;
	}
	
void cEmployee::display(){
	cout<<"Id is: "<<mId<<endl;
	cout<<"Basic salary: "<<basicSalary<<endl;
	mBdate.display();
}
int main()  
{  
  cEmployee e1;
  e1.display();
  

//  cEmployee e2(2,20000,11,11,1999);
//  e2.display();
  
  return 0;  
}
