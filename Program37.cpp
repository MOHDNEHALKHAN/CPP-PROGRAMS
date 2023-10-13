/*PROGRAM USING POINTERS IN OBJECTS*/

#include <iostream>
#include <iomanip>
using namespace std;

class Distance
{
private:
    int feet;
    float inches;

public:
    void getdist()
    {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }

    void printdist()
    {
        cout << feet << "'-" << inches << "\"";
    }
};

int main()
{
    Distance obj; // Create an object of the Distance class
    obj.getdist();
    cout << "The distance entered is: ";
    obj.printdist();
    cout << endl;
    return 0;
}