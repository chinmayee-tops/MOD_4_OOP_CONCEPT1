/* Write a C++ program to implement a class called Student that has private member 
variables for name, class, roll number, and marks. Include member functions to 
calculate the grade based on the marks and display the student's information. 
Accept address from each student implement using of aggregation. */

#include<iostream>
#include<string.h>
using namespace std;

class Student 
{
	  	private: 
	  				string name;
	  				string studentClass;
	  				int rollNumber;
	  				double marks;
	  		
		public:
    				// Constructor
    				Student(const std::string & studentName,
      				const std::string & sClass, int rollNum, double studentMarks): name(studentName),
  					studentClass(sClass),
  					rollNumber(rollNum),
  					marks(studentMarks) {}
    				/*Student(string n, string sc, int r, int m)
    				{
    					strcpy(name, n);
    					strcpy(studentClass,sc);
    					rollNumber=r;
    					marks=m;
					}*/
					
					// Member function to calculate the grade based on marks
  					string calculateGrade() 
					{
    					if(marks>= 90) 
						{
      						return "A+";
    					} 
						else if(marks>=80) 
						{
      						return "A";
    					} 
						else if(marks>=70) 
						{
      						return "B";
    					} 
						else if (marks >= 60) 
						{
      						return "C";
    					} 
						else 
						{
      						return "D";
    					}
  					}
  					
  				// Member function to display student information
  				void displayInformation() 
				{
    					cout<<"\n\n\t Name: " <<name;;
    					cout<<"\n\n\t Class: " <<studentClass;;
   						cout<<"\n\n\t Roll Number: " <<rollNumber;
    					cout<<"\n\n\t Marks: " <<marks;
    					cout<<"\n\n\t Grade: " <<calculateGrade();
  				}
};

main() 
{
  		// Create a student object
  		string studentName;
  		string sClass;
  		int rollNum;
  		double studentMarks;
  		
  		cout<<"\n\n\t Student details: ";
  		cout<<"\n\n\nt Name: ";
  		cin>>studentName;

  		cout<<"\n\n\t Class: ";
  		cin>>sClass;

  		cout<<"\n\n\t Roll number: ";
  		cin>>rollNum;

  		cout<<"\n\n\t Marks (0-100): ";
  		cin>>studentMarks;

  		Student student(studentName, sClass, rollNum, studentMarks);

  		// Display student information
  		student.displayInformation();

}
