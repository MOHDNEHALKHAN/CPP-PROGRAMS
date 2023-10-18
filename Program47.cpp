/*PROGRAM USING NAMSPACE*/

#include <iostream>
using namespace std;
namespace f1_space     // fisrt name space
{
void f1()
{
cout<<"This is the first namespace"<<endl;
}
}
namespace f2_space   // second namespace
{
void f2()
{
cout<<"This is the second namespace"<<endl;
}
}
int main()
{
f1_space::f1();   //calls function from fisrt namespace
f2_space::f2();   //calls function from second namespace
return 0;
}