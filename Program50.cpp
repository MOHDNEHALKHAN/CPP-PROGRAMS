/*PROGRAM USING OVERLOADING  A BINARY OPERATOR WITH FRIEND FUNCTION NOT MEMBER FUNCTION*/

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

    friend Distance operator+(const Distance&, const Distance&);
};

Distance operator+(const Distance& d1, const Distance& d2) {
    int f = d1.feet + d2.feet;
    int i = d1.inches + d2.inches;
    if (i >= 12) {
        i -= 12;
        f++;
    }
    return Distance(f, i);
}

int main() {
    Distance d1(2, 5), d2;
    d2 = Distance(10) + d1;
    d2.display();
    return 0;
}