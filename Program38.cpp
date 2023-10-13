/*PROGRAM USING ABSTRACT CLASS*/

#include <iostream>
using namespace std;

// Base class
class shape
{
public:
    // pure virtual function providing interface framework
    virtual int getarea() = 0;

    void setlength(int l)
    {
        length = l;
    }

    void setbreadth(int b)
    {
        breadth = b;
    }

protected:
    int length;
    int breadth;
};

// Derived Classes
class rectangle : public shape
{
public:
    int getarea() override
    {
        return length * breadth;
    }
};

class square : public shape
{
public:
    int getarea() override
    {
        return length * length;
    }
};

int main()
{
    rectangle rect;
    square sq;

    rect.setlength(7);
    rect.setbreadth(5);
    cout << "Area of rectangle is: " << rect.getarea() << endl;

    sq.setlength(5);
    cout << "Area of square is: " << sq.getarea() << endl;

    return 0;
}