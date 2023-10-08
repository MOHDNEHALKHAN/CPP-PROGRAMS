/*PROGRAM USING  STRING LIBRARY FUNCTION strrev()*/

#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, sizeof(str));
    strrev(str);
    cout << "Reversed string: " << str << endl;
    return 0;
}