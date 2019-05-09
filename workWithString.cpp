//source:https://www.geeksforgeeks.org/c-string-class-and-its-applications/
#include<iostream>

using namespace std;

int main()
{
// initialization  by Raw string
  string str1("first string");
  // initialization bbbby another string
  string str2(str1);
  //initialization by character with number of occurance
  string str3(5,'#');
  //initialization by part of another string
  //from 6 index( second parameter)
  //6 characters(third parameter)
  string str4(str1,6,6);
  //initialization by part of another string :iterator version
  string str5(str2.begin(),str2.begin() +3);

  cout<<str1<<endl;
  cout<<str2<<endl;
  cout<<str3<<endl;
  cout<<str4<<endl;
  cout<<str5<<endl;
  



return 0;
}
