/*PROGRAM FOR READING A FILE*/

#include <iostream>
#include <fstream>

int main() {
    std::ifstream openFile("cpp-home.txt");  // please run program 81 before 82
    char ch;

    while (openFile.get(ch)) {
        std::cout << ch;
    }

    openFile.close();
    return 0;
}