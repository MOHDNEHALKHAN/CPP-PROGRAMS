/*PROGRAM USING TELLG()*/

#include <fstream>
#include <iostream>

int main() {
    std::ifstream file("text_file.txt"); // manually create a file text_file.txt and write anyting you want it will tell the no. of character used
    char arr[10];

    file.read(arr, 5); // Read 5 characters into arr
    std::cout << file.tellg() << std::endl;

    file.close();

    return 0;
}
