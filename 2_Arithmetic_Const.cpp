/* Write a program of Addition, Subtraction, Division, 
Multiplication using constructor. */

#include<iostream>
using namespace std;

class Operations
{
	int n1, n2;
	
	public : 
			Operations(int a, int b) //Parameterized constructor
			{
				n1=a;
				n2=b;
			}	
			void Add()  //Member function
			{
				cout<<"\n\n\t"<<"Addition : "<<n1+n2;
			}
			
			void Sub() //Member function
			{
				cout<<"\n\n\t"<<"Subtraction : "<<n1-n2;
			}
			
			void Mul() //Member function
			{
				cout<<"\n\n\t"<<"Multiplication : "<<n1*n2;
			}
			
			void Div() //Member function
			{
				cout<<"\n\n\t"<<"Division : "<<n1/n2;
			}
};

main()
{
	Operations O(10,5); //call constructor
	O.Add();
	O.Sub();
	O.Mul();
	O.Div();
}

