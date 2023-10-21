#include <iostream>  
     using namespace std;  
     template<class T1, class T2>  
    class A   
    {  
         T1 a;  
         T2 b;  
         public:  
        A(T1 x,T2 y)  
       {  
           a = x;  
           b = y;  
        }  
           void display()  
          {  
                 cout << "Values of a and b are : " << a<<" ,"<<b<<endl;  
           }  
      };  
  
      int main()  
     {  
           A<int,char> d(5,'c');  
           d.display();  
           return 0;  
     }  
