/*PROGRAM USING COMPILE TIME POLYMORPHISM (OPERATING OVERLOADING)*/

#include <iostream>
using namespace std;
class count
{
private :
int value;
public :   // constructor to initialize count to 5
count() : value(5){}
//overload ++ when used as prefix
void operator++()
{
++value;
}
void display()
{
cout<<"count:"<<value<<endl;
}
};

int main()
{
count count1;
// call the "void operaotor++()"function
++count1;
count1.display();
return 0;
}