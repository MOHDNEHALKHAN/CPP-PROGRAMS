/*PROGRAM USING INITIALIZATION OF AN ARRAY*/

#include<iostream>
int main()
{
int i , sum =0;
int a[10] = {21,26,54,76,98,92,100,23,18,14};
for (i=0 ; i<10 ;i++)
{
sum = sum + a[i];
}
std::cout<<"\n Sum of values of an array is = "<<sum;
}