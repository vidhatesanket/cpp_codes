#include<iostream>
using namespace std;
void concat_(char*,char* );

int main(){
	char name[5]="pune";
	char array[5]="boys";
	
	 concat_(name,array);
	cout<<"output: "<<name<<endl;
	
	return 0;
}
void concat_(char* p, char* q){
	while(*p != '\0'){
		p++;
	}
	while(*q != '\0'){
		*p=*q;
		q++;
		p++;
	}
	*p='\0';
//	cout<<"output:"<<p<<endl;
}
