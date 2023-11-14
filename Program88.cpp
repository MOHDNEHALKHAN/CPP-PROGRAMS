/*PROGRAM TO READ LINE BY LINE*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char line[100]; // a whole line will be stored here

    ifstream openFile("filename.txt"); // replace "filename.txt" with your actual file name

    if (!openFile.is_open()) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    while (openFile.getline(line, 100)) {
        cout << line << endl;
    }

    openFile.close(); // don't forget to close the file
    return 0;
}