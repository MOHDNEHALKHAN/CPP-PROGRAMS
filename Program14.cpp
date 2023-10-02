/*PROGRAM USING POINTERS AND ARRAYS*/

#include<iostream>
int main()
{
int A[5];
int*p;
p = A ; *p = 10;
p++; *p =20 ; p = &A[1];
p++; *p =30 ; p = &A[2];
for(int n = 0 ; n < 3 ; n++)
std::cout << A[n],"";
}