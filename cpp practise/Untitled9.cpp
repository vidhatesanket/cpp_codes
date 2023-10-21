#include <iostream>
using namespace std;
 
class Complex
{
private:
    int real, imag;
public:
	
Complex(){
	
}
	friend  void operator << (ostream &out, const Complex &c);
    friend void operator >> (istream &in,   Complex &c);
};
 
//
 
void  operator >> (istream& input,  Complex &c)
{
    cout << "Enter Real Part ";
    input >> c.real;
    
    cout << "Enter Imaginary Part ";
    input >> c.imag;
    
}
 
int main()
{
   Complex c1;
   cin >> c1;  //cin.operator>>(c1);
   
   cout << "The complex object is ";
   cout << c1;
   return 0;
}
