/*PROGRAM USING COMMAND LINE ARGUMENTS & PRINTER OUTPUT(TO PASS TWO ARGUMENTS IN THE MAIN FUNCTION)*/

#include <iostream>

int main(int argc, char* argv[])
{
    using namespace std;
    cout << "There are " << argc - 1 << " arguments:" << endl; // subtract 1 to exclude the program name as an argument

    // loop through each argument and print its number and value
    for (int nArg = 0; nArg < argc; nArg++)
    {
        cout << nArg << " " << argv[nArg] << endl;
    }

    return 0;
}