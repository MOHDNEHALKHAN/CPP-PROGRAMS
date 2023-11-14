/*PROGRAM TO READS THE FILE, CHARACTER BY CHARACTER(YOU CAN READ IT WORD BY WORD)*/

#include <iostream>
#include <fstream>

int main() {
    std::ifstream openFile("example.txt");  // Replace "example.txt" with your file name

    char str[30];  // the word can't be more than 30 characters

    char ch;
    while (openFile.get(ch)) {
        std::cout << ch;
    }

    openFile.close();

    return 0;
}