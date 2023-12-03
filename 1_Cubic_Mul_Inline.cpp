/* Write a program to find the multiplication values and 
the cubic values using inline function.*/

#include<iostream>
using namespace std;

class line
{
   public:
              inline float mul(float x,float y) //inline function
              {
                            return(x*y);
              }
              inline float cube(float x)  //inline function
              {
                            return(x*x*x);
              }
};

main()
{
              line obj;
              float val1,val2;

              cout<<"\n\n\t Enter 1st value :: ";
              cin>>val1;
              cout<<"\n\n\t Enter 2nd value :: ";
              cin>>val2;
              cout<<"\n\n\t Multiplication value is :: "<<obj.mul(val1,val2);
              cout<<"\n\n\t Cube value of  [ " <<obj.cube(val1)<<" ] is :: ["<<obj.cube(val2)<<" ]\n";

}


