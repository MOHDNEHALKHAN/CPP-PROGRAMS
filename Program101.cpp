/*PROGRAM USING  A GENERIC FUNCTION THAT CAN BE USED FOR DIFFERENT DATA TYPES.*/

#include <iostream>
using namespace std;

template<typename T> 
T myMax(T x, T y) {
    return (x > y) ? x : y;
}

int main() {
    cout << myMax<int>(3, 7) << endl;            // Call myMax for int
    cout << myMax<double>(3.0, 7.0) << endl;      // Call myMax for double
    cout << myMax<char>('g', 'e') << endl;        // Call myMax for char
    return 0;
}