/*PROGRAM USING EXCEPTION HANDLING*/

#include<iostream>
using namespace std;  

int main() {  

    int a, b;

    cout << "Enter the values of a and b:";
    cin >> a;
    cin >> b;

    int x = a - b;

    try {
        if (x != 0) {
            cout << "result (a/x) =" << a / x << "\n";
        } else {
            throw(x);  // throws int object
        }
    } catch (int i) {  // catches the exception
        cout << "Exception caught: Divide by zero error\n";
    }

    cout << "End";
    return 0;
}  