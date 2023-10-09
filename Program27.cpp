/*PROGRAM USING  STRING LIBRARY FUNCTION srcpy()*/

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
char p[10] = "OOPS";
char q[10];
strcpy(q, p);
cout<<q<<endl;
}