#include<iostream>
using namespace std;

class date{
	int dd,mm,yy;
	public:
		friend void operator>>(istream&,date&);
		friend void operator<<(ostream&,date&);
		
};
void operator>>(istream& input, date& obj){
	
	input>>obj.dd>>obj.mm>>obj.yy;
	
}
void operator<<(ostream& output, date& obj){
	cout<<obj.dd<<"/"<<obj.mm<<"/"<<obj.yy<<endl;
}

int main(){
	date d;
	cin>>d;
	
	cout<<d;
}
