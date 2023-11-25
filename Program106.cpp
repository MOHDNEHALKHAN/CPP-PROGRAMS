/*PROGRAM USING STATIC MEMBERS */

#include <iostream>
using namespace std;

template <class T>
class X {
public:
    static T s;
};

template <class T>
T X<T>::s = 0;

template<>
int X<int>::s = 3;

template<>
const char* X<const char*>::s = "Hello";

int main() {
    X<int> xi;
    X<const char*> xc;
    cout << "xi.s = " << xi.s << endl;
    cout << "xc.s = " << xc.s << endl;
    return 0;
}
