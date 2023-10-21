#include <iostream>     
using  namespace std;  
#include<string.h>

class date
{
	int dd,mm,yy;
	public:
		void get()
		{
			cout<<"Enter birth date\n";
			cout<<"date: "<<endl;
			cin>>dd;
			cout<<"month: "<<endl;
			cin>>mm;
			cout<<"year: "<<endl;
			cin>>yy;
		}
		void put()
		{
			cout<<" Birth date :"<<dd<<"/"<<mm<<"/"<<yy<<endl;
		}
};

class marks{
	public:
		
	int marks[5];
	int sum=0;
	void get(){
		for(int i=0; i < 5; i++){
			cout<<"Enter the marks of subject: "<<i+1<<endl;
			cin>>marks[i];
			sum+=marks[i];
		}
	}
	void showMarks(){
		for(int i=0; i < 5; i++){
			cout<<"Marks entered of subject "<<i+1<<" = "<<marks[i]<<endl;
		}
	}
	void put(){
		cout<<"Average marks: "<<sum/5<<endl;
	}
	
};

class student
{
	int rollno;
	char name[10];
	date d;
	marks m;
	
	public:
		void get()
		{
			cout<<"Enter rollno\n";
			cin>>rollno;
			cout<<"Enter student name\n";
			cin>>name;
			d.get();
			m.get();
		}
		void put()
		{
			cout<<rollno<<"-------"<<name<<"-----------"<<endl;
			d.put();
			m.showMarks();
		
			
		}
		void output()
		{
			cout<<rollno<<"-------"<<name<<"-----------"<<endl;
			d.put();
			m.put();
			
		}
		int getrollno()
		{
			return rollno;
		}
//		char* getname()
//		{
//			return name;
//		}
//		void setrollno(int r)
//		{
//			rollno=r;
//		}
//		void setname(char* n)
//		{
//			strcpy(name,n);
//		}
		
		
};
int main()
{
	int n;
	cout<<"Enter number of students for which you want to store and sort data: \n";
	cin>>n;
	
	student s[10],temp;

	//Storing the data in dynamic array object
	for(int i=0;i<n;i++)
	{
		s[i].get();
		
	}
	
	//printing the stored data
	cout<<"\n\n\n\n"<<"Unsorted information: "<<endl;
	for(int i=0;i<n;i++)
	{
		s[i].put();
		
	}
	
	//Implementing the bubble sort to sort the data
	
	cout<<"\n\n\n\n"<<"Sorted information\n";
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(s[i].getrollno()>s[j].getrollno())
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
			
		}
	}
	
	for(int i=0;i<n;i++){
		s[i].output();
	}

}
