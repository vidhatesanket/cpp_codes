#include<iostream>
using namespace std;
template<class T,int size> 

class BubbleSort{
	
	public:
	T a[size];
	
void insert_a(){
	cout<<"Enter the value of any datatype randomly(In unsorted manner)"<<endl;
	for(int i=0; i < size; i++){
		cout<<"Enter the element number : "<< i+1<<endl;
		cin>>a[i];
	}
}

void sorting_a(){
		
	for(int i=1; i < 101; i++){
		for(int j=0; j < (i-1); j++){
			if(a[j] > a[j+1]){
				int temp = a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
		
	}
}
	
void display_a(){
	cout<<"Sorted array: "<<endl;
	for(int i=0; i < size; i++){
			
		cout<<a[i]<<"  ";
	}
}
	
}; 

int main(){
	

    BubbleSort<int,10> t1;		
    t1.insert_a();  
    t1.sorting_a();
    t1.display_a();  
	return 0;
}
