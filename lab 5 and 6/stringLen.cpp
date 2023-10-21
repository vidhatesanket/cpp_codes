//String length
#include<iostream>
using namespace std;

int main()
{
	
	char str1[]="pune";
	int len=0;
	int i=0;
	while(str1[i] != '\0'){
		len++;
		i++;
	}
	
	cout<<"Length of string is: "<<len;
}


