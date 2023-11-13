/*PROGRAM FOR READ & WRITE*/

#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Create the file and write "Hi!" to it
    std::ofstream outFile("test.txt");
    outFile << "Hi!";
    outFile.close();

    // Read from the file without using loops, switch, or if statements
    std::ifstream inFile("test.txt");

    // Check if the file is open before proceeding
    if (inFile.is_open()) {
        std::string str;

        // Read the content from the file
        inFile >> str;

        // Display the content
        std::cout << str << std::endl;

        // Close the file
        inFile.close();
    }

    return 0;
}