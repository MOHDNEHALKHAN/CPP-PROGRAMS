/*PROGRAM USING DO WHILE LOOP*/

#include<iostream>
int main()
{
int n , i=1 , factorial = 1;
std::cout<<"Enter a positive integer :";
std::cin>>n;
do
{
factorial = factorial*i;
i++;
}
while (i<=n);
std::cout<<"factorial of "<< n << " = " << factorial;
return 0;
}