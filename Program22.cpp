/*PROGRAM TO CALCULATE ADDITION OF THREE NUMBERS  USING INLINE FUNCTION */

#include<iostream>
#include<conio.h>
inline int add(int x , int y ,int z)
{
return (x+y+z);
}
int main()
{
int x = 6;
int y = 4;
int z = 2;
std::cout<<add(x,z,y);
return 0;
}