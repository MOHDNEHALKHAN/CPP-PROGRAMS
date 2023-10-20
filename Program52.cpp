/*PROGRAM USING INHERITANCE*/

#include<iostream>
using namespace std;

class A {
    int data;
public:
    void f(int arg) {
        data = arg;
    }
    int g() {
        return data;
    }
};

class B : public A {
};

int main() {
    B obj; 
    obj.f(20);
    cout << obj.g() << endl; 
    return 0;
}