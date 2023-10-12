/*PROGRAM USING ARRAYS IN OBJECTS*/

#include <iostream>

class distance {
private:
    int feet;
    float inches;

public:
    void getdist() {
        std::cout << "Enter feet: ";
        std::cin >> feet;
        std::cout << "Enter inches: ";
        std::cin >> inches;
    }

    void printdist() {
        std::cout << feet << "\'-" << inches << "\"";
    }
};

int main() {
    distance d[50];
    int count = 0;
    char res;

    do {
        std::cout << "Enter the value of distance " << count + 1 << ":\n";
        d[count].getdist();
        count++;
        std::cout << "Do you want to enter another distance (y/n)?: ";
        std::cin >> res;
    } while (res != 'n' && res != 'N');

    for (int j = 0; j < count; j++) {
        std::cout << "\nDistance number " << j + 1 << " is ";
        d[j].printdist();
    }

    std::cout << std::endl;
    return 0;
}