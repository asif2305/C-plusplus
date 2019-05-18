#include<iostream>
#include<cstdio>

using namespace std;

class Test
{
 // Access modifier
 public:

 // data member

   string strName;
   int id;
   //Member function
   void printId(); // function is not  defined inside class defination;to declare class defination we have to use :: (scope resolution)
   void printName() // function is defined inside class defination
   {
     cout<<"Testname is: "<< strName<<endl;
   }

};
void Test::printId()
{
  cout<<"Test id is : "<<id<<endl;
}

int main ()
{
   // Declare an object of class Test
    Test obj1;

    // access data member
    obj1.id=10;
    obj1.strName="Ahmed";

   // access member function
   obj1.printId();
   obj1.printName();
   return 0;


}
