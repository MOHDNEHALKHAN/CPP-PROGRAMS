/*PROGRAM USING STATIC STORAGE CLASS*/

#include<iostream>
void f1(int x);

int main()
{
int num ;
char ch;
int sum = 0, n = 0, avg;
do
{
std::cout<<"Enter a number\n";
std::cin>>num;
f1(num);
std::cout<<"\nDo you want to enter another number\n";
std::cin>>ch;
}
while(ch =='y');
return 0;
}
void f1(int x)
{
static int sum = 0 , n = 0;
sum = sum + x;
n = n+1;
int avg = sum/n;
std::cout<<"Average is : "<<avg;
}