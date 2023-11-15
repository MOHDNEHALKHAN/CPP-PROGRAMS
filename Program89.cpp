/*PROGRAM USING THE CLEAR() FUNCTION*/

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    const string filename = "file2.txt";

    // Attempt to open the file for reading
    ifstream fileStream(filename.c_str());
    
    // Check if the file is open, indicating it exists
    if (fileStream.is_open())
    {
        fileStream.close();
        cout << "Error: File already exists!\n";
    }
    else
    {
        // File does not exist, create it
        ofstream Test(filename);
        if (Test.is_open())
        {
            cout << "Fine!\n";
            Test.clear(ios::eofbit); // set it to ios::eofbit (useless in this context) & check again if it is this flag in dead
            if (Test.rdstate() == ios::eofbit)
                cout << "EOF!\n";
            Test.close();
        }
        else
        {
            cout << "Error: Unable to create the file!\n";
        }
    }

    return 0;
}

