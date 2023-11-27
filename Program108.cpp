/*PROGRAM ILLUSTRATES HOW  A TRY BLOCK INVOLVES A FUNCTION THAT GENERATES AN EXCEPTION*/

#include<iostream>

void divide(int x, int y, int z) {
    std::cout << "\nWe are inside the function\n";
    
    if ((x - y) != 0) {
        int R = z / (x - y);
        std::cout << "Result = " << R << "\n";
    } else {
        throw (x - y); // throw point
    }
}

int main() {
    try {
        std::cout << "We are inside the try block\n";
        divide(10, 20, 30); // invoke divide()
        divide(10, 10, 10); // invoke divide()
    } catch (int i) {
        std::cout << "Caught the exception\n";
    }

    return 0;
}