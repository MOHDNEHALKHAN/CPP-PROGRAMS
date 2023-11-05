/*PROGRAM USING CHARACTER AND STRING INPUT & OUTPUT TO FILES*/

#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    ofstream outfile("test.txt"); // Open the file for writing
    if (!outfile)
    {
        cout << "Error opening the file." << endl;
        return 1; // Return error code
    }

    char str[] = "Manipal university";

    // Writing characters to the file
    for (int j = 0; str[j] != '\0'; j++)
    {
        outfile.put(str[j]);
    }

    outfile.close(); // Close the file
    cout << "Data written to the file successfully." << endl;
    return 0;
}