#include<iostream>
using namespace std;
int main(){

	
	int number;
	cout<<"Enter the number of rows"<<endl;
	cin>>number;
		static int initial = number;
	for(int row = 1; row <= number; row++){
		for(int col=initial; col>0; col--){
			cout<<"*"<<" ";
		}
		initial--;
		cout<<endl;
	}
}
