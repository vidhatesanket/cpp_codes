
#include<iostream>
using namespace std;

int uStrCmp(char* str1,char* str2)
{
	
    if(*str1==*str2){
    	return 1;
	}
	  
	return 0;
}

int main()
{
	
	char str1[]="pune";
	char str2[]="PUNE";
	
	
	if(uStrCmp(str1,str2))
	{
		cout<<"Entered String are same! "<<endl;
	}else{
		cout<<"Entered String are different!"<<endl;
	}
}
