/*PROGRAM USING COPY CONSTRUCTOR*/

#include<iostream>
using namespace std;
class samplecopyconstructor
{
private:
int x,y; // data members
public :
samplecopyconstructor(int x1, int y1)
{
x =x1;
y = y1;
}
/*copy constructor*/
samplecopyconstructor(const samplecopyconstructor &sam)
{
x = sam.x;
y = sam.y;
}
void display()
{
cout<<x<<""<<y<<endl;
}
};
int main()
{
samplecopyconstructor obj1(10,15);        // Normal constructor                          
samplecopyconstructor obj2 = obj1;        // Copy constructor
obj1.display();
cout<<"copy constructor:";
obj2.display();
return 0;
}