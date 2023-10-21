#include<iostream>
#include<string.h>
using namespace std;
class string1
{
	int len;
	char* ptr;
	public:
		void show();
		string1(char* );
		~string1();
};
void string1::show()
{
	cout<<"len of string: "<<len<<endl;
	cout<<"string is : "<<ptr<<endl;
}
string1::string1(char* sptr)
{
	len=strlen(sptr);
	ptr=new char[len+1];
	strcpy(ptr,sptr);
}
string1::~string1()
{
	cout<<"destructor is called"<<endl;
	if(ptr)
	delete[]ptr;
	ptr=NULL;
}
int main(){
	string1 d("rahul");
	d.show();
	
		string1 d1(d);
		d1.show();
		
	{
	
	string1 d2(d1) ;
		d2.show();
		d2.~string1();
		
	}d1.show();
	
	
	
	return 0;
}
