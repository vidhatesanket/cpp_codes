#include<iostream>
using namespace std;
int main(){
	
	char a='A';
	
	//for loop
	for(int i=1; i <=5; i++){
		for(int j=1; j <= i; j++){
			cout<<a<<" ";
			a++;
		}
		cout<<endl;
	}
	
	static int initial = 5;
	
	//while loop
	for(int row = 1; row <= 5; row++){
		int col =initial;
		while(col>0){
			cout<<"*"<<" ";
			col--;
		}
		initial--;
		cout<<endl;
	}
	
	//Do while loop
	int i=1;
	int sum=0;
	do{
		sum=sum+i;
		i++;
	}
	while(i!=20);
	cout<<sum;
	
	return 0;
}
