/*PROGRAM USING FUNCTION OVERRIDING*/

#include<iostream>
#include<string>
using namespace std;

class A
{
public :
void show()
{
cout<<"Base class\n";
}
};

class B : public A
{
public :
void show()
{
cout<<"Derived class";
}
};

int main()
{
A obj1;   // object of base class
B obj2;     // object of derived class
obj1.show();   // calls the function show defined in base class A
obj2.show();    // calls the function show defined in derived class B
return 0;
}