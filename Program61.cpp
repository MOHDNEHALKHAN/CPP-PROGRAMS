/*PROGRAM FOR CALLING PARENT CLASS CONSTRUCTOR USING CHILD CLASS CONSTRUCTOR*/

#include <iostream>

class A {
private:
    int a;

public:
    A(int k) {
        // parameterized constructor of parent class
        a = k;
        std::cout << "A constructor called with value: " << a << std::endl;
    }
};

class B : public A {
private:
    int b;

public:
    B(int x, int y) : A(x) {
        // constructor of child class calling constructor of base class
        b = y;
        std::cout << "B constructor called with values: " << x << ", " << y << std::endl;
    }
};

int main() {
    B obj(2, 3);
    return 0;
}
