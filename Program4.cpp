/*PROGRAM USING SWITCH CASE*/

#include<iostream>
int main()
{
char x;
float num1 , num2;
std::cout << "Select an Operator either +or-or*or/\n";
std::cin>> x;
std::cout <<" Enter two operands :\n";
std::cin >> num1>>num2;
switch(x)
{
case '+' :
std::cout << num1<< "+" <<num2<< "=" << num1+num2;
break;
case '-' :
std::cout << num1<< "-" <<num2<< "=" << num1-num2;
break;
case '*' :
std::cout << num1<< "*" <<num2<< "=" << num1*num2;
break;
case '/' :
std::cout << num1<< "/" <<num2<< "=" << num1/num2;
break;
default : 
std::cout << "Not defined";
 }
}