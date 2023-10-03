/*PROGRAM FOR THE SUM OF ARRAY ELEMENTS*/

#include<iostream>
int main()
{
int n , sum =0;
int *ptr;
std::cout<< "Enter the size of an array: "<< std::endl;
std::cin>> n;
ptr = new int[n];
std::cout<<"Enter the "<<n<<" numbers:\n";
for(int i =0; i<n ; i++)
{
std::cin >> ptr[i];
sum = sum + ptr[i];
}
std::cout<< "sum = "<< sum;
delete[] ptr;
return 0;
}