/*PROGRAM USING DYNAMIC CONSTRUCTOR*/

#include<iostream>

class muj
{
const char*ptr;
public :
muj()
{
ptr = new char[15];     //default constructor
ptr = "Welcome to Manipal";    // allocating memory at run time+
}
void display()
{
std::cout<<ptr;
}
};
int main()
{
muj a;
a.display();
}