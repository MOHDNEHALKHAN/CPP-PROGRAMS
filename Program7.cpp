/*PROGRAM USING UNCONDITIONAL ERROR STATEMENT*/

#include<iostream>
#include<cstdlib>
int main()
{
std::cout<< "example program for exit";
exit(0) ; // statement terminates the program & return 0 to us
std::cout<<"this statement will never executed";
}
