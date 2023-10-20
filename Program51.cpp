/*PROGRAM USING RELATIONAL OPERATOR OVERLOADING*/

#include<iostream>
using namespace std;

class Distance {
private:
    int feet, inches;

public:
    Distance() {
        feet = 0;
        inches = 0;
    }

    Distance(int f) {
        feet = f;
        inches = 0;
    }

    Distance(int f, int i) {
        feet = f;
        inches = i;
    }

    void display() {
        cout << feet << "'" << inches << "\"" << endl;
    }

    void getdata() {
        cout << "Enter distance in feet and inches: ";
        cin >> feet >> inches;
    }

    bool operator<(const Distance& d1) {
        if (feet < d1.feet) {
            return true;
        } else if (feet == d1.feet && inches < d1.inches) {
            return true;
        } else {
            return false;
        }
    }
};

int main() {
    Distance d1, d2;
    d1.getdata();
    d2.getdata();

    if (d1 < d2) {
        cout << "Smaller distance is: ";
        d1.display();
    } else {
        cout << "Smaller distance is: ";
        d2.display();
    }

    return 0;
}