/*PROGRAM USING OBJECTS*/

#include <iostream>

class Distance {
private:
    int feet;
    int inches;

public:
    void setDistance(int c, int d) {
        feet = c;
        inches = d;
    }

    void printDistance() {
        std::cout << feet << "ft " << inches << "inches";
    }
};

int main() {
    Distance d1;
    d1.setDistance(10, 2);
    d1.printDistance();
    return 0;
}
