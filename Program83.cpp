/*PROGRAM TO CREATE FILE USING SINGLE CONSTRUCTOR*/

#include<iostream>
#include<fstream>

using namespace std;

int main() {
    ofstream outf("file1"); // Connects file1 to outf
    cout << "Enter item name: ";
    char name[30]; // get name from keyboard & write it to file
    cin >> name;
    outf << name << "\n";

    cout << "Enter item cost: ";
    float cost;
    cin >> cost; // input the value of cost
    outf << cost << "\n"; // write to file file1
    outf.close(); // disconnect file named file1 to outf

    ifstream inf("file1"); // connect file named file1 to inf
    inf >> name; // read name from file1
    inf >> cost; // read cost from file named file1
    cout << "\n";
    cout << "Item name: " << name << "\n";
    cout << "Item cost: " << cost << "\n";
    inf.close(); // disconnect file named file1 from inf

    return 0;
}