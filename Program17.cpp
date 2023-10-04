/*PROGRAM USING PASS BY VALUE*/

#include<iostream>
int addition(int a, int b);
int main()
{
int num1;
int num2;
int add;
std::cout<<"Enter the first number:\n";
std::cin>>num1;
std::cout<<"Enter the second number:\n";
std::cin>>num2;
add = addition(num1,num2);    // call function
std::cout<<"Addition is : "<<add<< std::endl;
return 0;
}
int addition(int a , int b)
{
return (a+b);
}