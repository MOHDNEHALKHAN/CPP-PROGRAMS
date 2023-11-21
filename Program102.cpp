/*PROGRAM USING OVERLOADING FUNCTION TEMPLATES*/

#include <iostream>

// Maximum of two int values
int const& max(int const& a, int const& b) {
    return a < b ? b : a;
}

// Maximum of two values of any type
template <typename T>
T const& max(T const& a, T const& b) {
    return a < b ? b : a;
}

// Maximum of three values of any type
template <typename T>
T const& max(T const& a, T const& b, T const& c) {
    return max(max(a, b), c);
}

int main() {
    std::cout << max(4, 5, 6) << std::endl;          // Calls the template for three arguments
    std::cout << max(8.1, 9.1, 0.1) << std::endl;   // Calls max<double> (by argument deduction)
    std::cout << max('c', 'd') << std::endl;        // Calls max<char> (by argument deduction)
    std::cout << max(7, 42) << std::endl;           // Calls the non-template for two ints
    std::cout << max<>(7, 42) << std::endl;         // Calls max<int> (by argument deduction)
    std::cout << max<double>(7, 42) << std::endl;   // Calls max<double> (no argument deduction)
    std::cout << max('c', 55.5) << std::endl;       // Calls the non-template for two ints

    return 0;
}