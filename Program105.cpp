/*PROGRAM USING TEMPLATE FUNCTION SPECIALIZATION*/

#include <iostream>
#include <cstring>
using namespace std;

template <class T>
T myMax(T a, T b) {
    return a > b ? a : b;
}

template <>
const char* myMax<const char*>(const char* a, const char* b) {
    return strcmp(a, b) > 0 ? a : b;
}

int main() {
    cout << "myMax('k', 's') = " << myMax('k', 's') << endl;
    cout << "myMax(10, 15) = " << myMax(10, 15) << endl;
    cout << "myMax(10.1, 15.2) = " << myMax(10.1, 15.2) << endl;
    cout << "myMax(\"Aladdin\", \"Jasmine\") = " << myMax("Aladdin", "Jasmine") << endl;

    return 0;
}