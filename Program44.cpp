/*PROGRAM USING PARAMETERIZED CONSTRUCTOR*/

#include<iostream>
class cube
{
public :
int side;
cube(int x)
{
side = x;
}
};

int main()
{
cube c1(10);
cube c2(20);
cube c3(30);
std::cout<<c1.side;
std::cout<<c2.side;
std::cout<<c3.side;
}
