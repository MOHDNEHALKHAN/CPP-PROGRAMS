/*PROGRAM USING WHILE LOOP*/

#include<iostream>
int main()
{
int n , i = 1 , factorial = 1;
std::cout<<"Enter a positive integer:";
std::cin>>n;
while(i<=n)
{
factorial = factorial*i;
i++;
}
std::cout<<"factorial of "<<n<<" = "<<factorial;
return 0;
}