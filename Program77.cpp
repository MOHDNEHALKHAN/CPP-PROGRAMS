/*PROGRAM HOW DATA CAN BE SENT TO THE PRINTER*/

#include<fstream>
using namespace std;

int main()
{
    ofstream prnfile("PRN");
    prnfile << "this is a test print page";
    prnfile.close(); 
    return 0; 
}