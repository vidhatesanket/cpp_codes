
#include <iostream>
using namespace std;
 

void CopyString(char* st1, char* st2)
{
    int i = 0;
 
      for (i = 0; st1[i]!='\0'; i++)
      {
          st2[i] = st1[i];
      }
    st2[i] = '\0';
}
 

int main()
{
    char str1[100] , str2[100];
    cout<<"Enter String: ";
    cin>>str1;
  
    CopyString(str1, str2);
     
    cout<<"String s1: "<<str1<<endl;
    cout<<"String s2: "<<str2<<endl;
       
      return 0;
}
