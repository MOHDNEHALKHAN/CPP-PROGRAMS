/*PROGRAM USING FRIEND FUNCTION*/

#include <iostream>
using namespace std;

class rect
{
private:
    int w, h; 
public:
    void setvalue(int, int);
    int area()
    {
        return (w * h);
    }
    friend rect duplicate(rect); 
};

void rect::setvalue(int c, int d)
{
    w = c;
    h = d;
}

rect duplicate(rect rectparam)
{
    rect r; // Declared r as a rect object
    r.w = rectparam.w * 2;
    r.h = rectparam.h * 2;
    return r; // Returned rect object r
}

int main()
{
    rect r1, r2;
    r1.setvalue(2, 3);
    r2 = duplicate(r1);
    cout << r2.area();
    return 0;
}