/*PROGRAM USING GET() & PUT()*/

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    fstream File("test_file.txt", ios::out | ios::in | ios::binary);

    if (!File.is_open()) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    char ch;
    ch = 'o';

    File.put(ch); // put the content of ch to the file
    File.seekg(0, ios::beg); // go to the beginning of the file

    File.get(ch); // read one character
    cout << ch << endl; // display it

    File.close();

    return 0;
}
