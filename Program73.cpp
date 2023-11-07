/*PROGRAM USING EXTRACTION OPERATOR(>>)*/

#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

int main() {
    ifstream infile("test.txt");
    char buffer[25];
    
    if (!infile.is_open()) {
        cout << "Error opening the file." << endl;
        return 1;
    }

    while (infile >> buffer) {
        cout << buffer << " ";
    }

    infile.close();
    getch();
    return 0;
}