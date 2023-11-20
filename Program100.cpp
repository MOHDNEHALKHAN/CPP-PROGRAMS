/*PROGRAM USING TEMPLATE FUNCTIONS*/

#include <iostream>
using namespace std;

// max returns the maximum of the two elements
template <class T>

T max(T a, T b)
{
    return a > b ? a : b;
}

int main()
{
    using std::max; // Add this line to use std::max
    cout << "max(10, 15) = " << max(10, 15) << endl;
    cout << "max('k', 's') = " << max('k', 's') << endl;
    cout << "max(10.1, 15.2) = " << max(10.1, 15.2) << endl;
    return 0;
}