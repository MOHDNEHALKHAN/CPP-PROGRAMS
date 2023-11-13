/* PROGRAM USING THE OPEN MODES */

#include<fstream>
using namespace std;  

int main()  
{
    ofstream saveFile("file1.txt", ios::ate); 
    saveFile << "online education\n";  
    saveFile.close();
    return 0;  
}
