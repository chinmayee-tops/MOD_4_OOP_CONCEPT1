/*
Write a C++ program to create a class called Car that 
has private member variables for company, model, and year. 
Implement member functions to get and set these variables.  */

#include<iostream>
#include<string.h>
using namespace std;

class Car
{
	char company[30];
	int model;
	int year;	
	
	public : void getdata(char c[20],int m, int y) //Member Function
			{
				strcpy(company,c);
				model=m;
				year=y;
			}
			
			void setdata() //Member Function
			{
				cout<<"\n\n\t Company Name : "<<company;
				cout<<"\n\n\t Model No : "<<model;
				cout<<"\n\n\t Year : "<<year;
			}
};
main()
{
	Car obj;
	char c[30];
	int m, y;
	cout<<"\n\n\t Company Name : ";
	cin>>c;
	cout<<"\n\n\t Model No : ";
	cin>>m;
	cout<<"\n\n\t Year : ";
	cin>>y;
	
	obj.getdata(c,m,y);
	obj.setdata();
	
	
}
