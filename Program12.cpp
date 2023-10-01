/*PROGRAM USING ARRAY (FOR SORTING)*/

#include<iostream>
using namespace std;
int main()
{
int a[10] , temp ;
for(int i=0; i<9; i++)
{
cin>>a[i];
}
cout<<"Array after sorting is";
for(int j = 0; j <9 ; j++)
for(int i =0 ; i < 9 ; i++)
{
if(a[i] > a[i+1])
{
temp = a[i];
a[i] =a[i + 1];
a[i + 1] = temp ;
}
}
for(int i=0 ; i<10 ; i++)
{
cout<< a[i]<< endl;
}
}