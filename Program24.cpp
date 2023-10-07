/*PROGRAM USING STRING*/

#include<iostream>
#include<iomanip>
const int size = 10;

int main() {
    char str[size];
    std::cout << "Enter a string: ";
    std::cin >> std::setw(size) >> str;
    std::cout << "You entered: " << str << std::endl;
    return 0;
}
