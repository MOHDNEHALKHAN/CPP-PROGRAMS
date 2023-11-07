/*PROGRAM TO CHECK TO FIND WHETHER THE FILE TO BE READ EXISTS ON THE DISK OR NOT*/

#include <iostream>
#include <fstream>
#include <conio.h> 

using namespace std;

int main() 
{
    ifstream infile("test.txt"); 
    if (!infile.is_open()) 
    {
        cout << "Cannot open file";
    }
    else
    {
        char buffer[25];
        while (infile >> buffer) 
        {
            cout << buffer << " ";
        }
        infile.close(); 
    }
    
    getch(); 
    return 0; 
}