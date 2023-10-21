#include<iostream>
using namespace std;

//Inline function-
inline void fun(){
	static int initial = 5;
	char ch='A';
	for(int row = 1; row <= 5; row++){
		for(int col=initial; col>0; col--){
			cout<<ch<<" ";
			ch++;
		}
		initial--;
		cout<<endl;
	}
}

int main(){
	fun();
	
}
