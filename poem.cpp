/*
Author: Frida Mesa
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 9 D
Here, I fixed program poem.cpp
*/

#include <iostream>
using namespace std;
string * createAPoemDynamically()

{
string *p = new string;
*p = "Roses are red, violets are blue";
return p;
}

int main() 
{
while(true) 
{
string *p;
p = createAPoemDynamically();
if (!p)
{
cout << "Memory allocation failed\n";
}

cout<<*p<<"\n";
delete p;
}
  return 0;
}
