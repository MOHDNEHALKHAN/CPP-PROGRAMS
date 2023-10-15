/*PROGRAM USING CONSTRUCTOR*/

#include<iostream>
using namespace std;
class muj
{
public :  // Access specifier
muj()        // member function(constructor)
{
cout << "Welcome to Manipal University"<< endl;
}
void display()    //  member function
{
cout <<"Good evening to all"<< endl;
}
};
int main()
{
muj a;
a.display();
return 0;
}