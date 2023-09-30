/*PROGRAM USING FOR LOOP*/

#include<iostream>
int main()
{
 int n ,i ,factorial = 1 ;
 std::cout<< "Enter a positive integer :";
 std::cin>> n;

 for(i=1 ; i<n ; i++)
 {
   factorial = factorial * i;
   std::cout<< "Factorial of "<< n <<" = "<< factorial << std::endl;
 }
 return 0;
}
