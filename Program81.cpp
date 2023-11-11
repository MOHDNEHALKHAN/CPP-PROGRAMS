/*PROGRAM TO CREATE A FILE & PUT SOME TEXT INTO IT*/

#include <fstream>
using namespace std;

int main()
{
    ofstream saveFile("cpp-home.txt");
    saveFile << "Hello World, from Manipal university";
    saveFile.close();
    return 0;
}