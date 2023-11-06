/*PROGRAM TO READ CHARACTER FROM FILE (USING IF STREAM CLASS)*/

#include<iostream>
#include<fstream>
#include<conio.h>

using namespace std;

int main()
{
    ifstream infile("test.txt");
    char ch;

    if (!infile.is_open()) {
        cout << "Error opening the file!" << endl;
        return 1;
    }

    while (infile.get(ch))
    {
        cout << ch;
    }

    infile.close();
    getch();
    return 0;
}