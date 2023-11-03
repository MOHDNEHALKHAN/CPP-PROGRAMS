/*PROGRAM USING RUN TIME POLYMORPHISM (FUNCTION OVERRIDING)*/

#include <iostream>
using namespace std;

class Base
{
public: 
    virtual void print()
    {
        cout << "Directorate of online Education" << endl; 
    }
};

class Derived : public Base 
{
public: 
    void print()
    {
        cout << "Manipal University-Jaipur" << endl;
    }
};

int main() {
    Derived derived1;
    derived1.print();
    return 0;
}