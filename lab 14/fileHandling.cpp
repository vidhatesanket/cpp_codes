#include <iostream>
#include <fstream>
using namespace std;


int main()
{
fstream new_file; 
new_file.open("new_file_write.txt",ios::out);  
if(!new_file) 
{
cout<<"File creation failed";
}
else
{
cout<<"New file created";
new_file<<"Learning File handling";    //Writing to file
new_file.close(); 
}   
//new_file.open("new_file.txt",ios::in);

new_file.open("new_file.txt",ios::out);  
   new_file<<"Some more data is added";
   new_file.close();
return 0;
}





