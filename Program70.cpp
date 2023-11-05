/*PROGRAM USING INSERTION OPERATOR(<<)*/

#include <iostream>
#include <fstream>

int main()
{
    std::ofstream outfile("example.txt");
    if (outfile.is_open()) {
        outfile << "Welcome to\n";
        outfile << "Manipal University\n";
        outfile.close(); // Close the file after writing
        std::cout << "Data has been written to example.txt\n";
    } else {
        std::cout << "Error opening the file\n";
    }
    return 0;
}