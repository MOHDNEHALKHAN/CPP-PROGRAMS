/*PROGRAM USING PASS BY REFERENCE*/

#include<iostream>
int swap(int &m, int &n); // function declaration

int main()
{
int a , b;
std::cout<<"Enter the two numbers:";
std::cin>>a>>b;
swap(a,b);
std::cout<<"The value of a is "<< a << std::endl;
std::cout<<"The value of b is "<< b << std::endl;
}
int swap(int &m , int &n)
{
int temp ;
temp = m;
m = n;
n = temp;
}