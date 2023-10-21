#include <iostream>
using namespace std;

void swap1(int*,int*);

int main(){
	int c,d;
	cout<<"Enter c and d: ";
	cin>>c>>d;
	cout<<"Value of c and d before swapping : "<<c<<"   "<<d<<endl;
	swap1(&c, &d);
	cout<<"Value of c and d after swapping : "<<c<<"   "<<d<<endl;
	
	return 0;
}

void swap1(int* m, int* n)
{
	int temp = *m;
	*m = *n;
	*n = temp;
	cout<<"After swapping Value of m and n: "<<*m<<*n<<endl;
}



