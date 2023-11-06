/*PROGRAM USING getline() FUNCTION*/

#include <iostream>
#include <fstream>
#include <cstdlib> // Include this for the system("cls") function

using namespace std;

int main() {
    ifstream infile("test.txt");
    char buffer[80];
    system("cls"); // Clear screen for Windows
    while (infile.getline(buffer, 80)) {
        cout << buffer << endl;
    }
    system("pause"); // Pause the console for Windows
    return 0;
}