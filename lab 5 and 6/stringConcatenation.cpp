#include<iostream>
using namespace std;
int main()
{
    char str1[10], str2[50], i, j=0;
    cout<<"Enter the First String: ";
    cin>>str1;
    
    cout<<"Enter the Second String: ";
    cin>>str2;
    
    for(i=0; str1[i]!='\0'; i++)
        {
			j++;
		}
    for(i=0; str2[i]!='\0'; i++)
    {
        str1[j] = str2[i];
        j++;
    }
    
    str1[j] = '\0';
    
    cout<<"String after Concatenation: "<<str1;
    cout<<endl;
    return 0;
}


