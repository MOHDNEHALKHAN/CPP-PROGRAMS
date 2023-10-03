/*PROGRAM TO CALCULATE FACTORIAL OF A NUMBER*/

#include<iostream>
#include<conio.h>
int fact(int);   // function declaration
int main()
{
int n , i , result ;
std::cout<< "Enter the number:\n";
std::cin>>n;
result = fact(n);
std::cout<<"Resultant factorial value is\n"<< result;
getch();
return 0;
}

int fact(int n)   // function definition
{
int i , factorial = 1;
for(i=1 ; i<=n ; i++)
{
factorial = factorial * i;
}
return factorial;
} 