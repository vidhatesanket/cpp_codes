#include<iostream>
using namespace std;

int main(){
	
	int size;
	cout<<"Enter the number of elements you want to store: "<<endl;
	cin>>size;
	
	int a[size];
	
	cout<<"Enter the value of any  randomly(In unsorted manner)"<<endl;
	for(int i=0; i < size; i++){
		cout<<"Enter the element number : "<< i+1<<endl;
		cin>>a[i];
	}
	
	for(int i=0; i < size; i++){
		for(int j=0; j <(size-i-1); j++){
			if(a[j] > a[j+1]){
				int temp = a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
		
	}
	cout<<"Sorted array: "<<endl;
	for(int i=0; i < size; i++){
			
		cout<<a[i]<<"  ";
	}
}
