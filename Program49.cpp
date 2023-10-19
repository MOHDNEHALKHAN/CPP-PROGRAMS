/*PROGRAM USING OVERLOADING  A BINARY OPERATOR*/

#include<iostream>
using namespace std;

class complex {
    float x;   // real part
    float y;   // imaginary part
public:
    complex() {}  // constructor1

    complex(float real, float img) {  // constructor2
        x = real;
        y = img;
    }

    complex operator+ (complex c);
    void display(void);
};

complex complex::operator+(complex c) {
    complex temp;   // temporary
    temp.x = x + c.x;
    temp.y = y + c.y;
    return(temp);
}

void complex::display(void) {
    cout << x << " + j " << y << "\n";
}

int main() {
    complex c1, c2, c3;  // invokes constructor1
    c1 = complex(2.5, 3.5);  // invokes constructor2
    c2 = complex(1.6, 2.7);
    c3 = c1 + c2;
    cout << "c1 = ";
    c1.display();
    cout << "c2 = ";
    c2.display();
    cout << "c3 = ";
    c3.display();
    return 0;
}
