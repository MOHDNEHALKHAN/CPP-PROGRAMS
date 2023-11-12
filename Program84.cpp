/* PROGRAM ILLUSTRATES THE WAY TO WORK WITH MULTIPLE FILES */

#include<iostream>
#include<fstream>

int main() {
    std::ofstream fout; // creating output stream object
    fout.open("Country"); // connect "country" to it
    fout << "India\n";
    fout << "USA\n";
    fout << "UK\n";
    fout.close(); // disconnect "country"

    fout.open("Capital"); // connect capital
    fout << "Delhi\n";
    fout << "Washington\n";
    fout << "London\n";
    fout.close(); // disconnect "capital"

    // Reading the files
    const int N = 80; // size of line
    char line[N];
    std::ifstream fin;
    
    fin.open("country"); // create input stream for "country" file
    std::cout << "Contents of country file\n";
    while (fin.getline(line, N)) { // read line by line
        std::cout << line << std::endl; // display it
    }
    fin.close();

    fin.open("Capital"); // create input stream for "Capital" file
    std::cout << "\nContents of Capital file\n";
    while (fin.getline(line, N)) { // read line by line
        std::cout << line << std::endl; // display it
    }
    fin.close();

    return 0;
}