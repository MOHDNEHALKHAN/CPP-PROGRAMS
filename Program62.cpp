/*PROGRAM USING DESTRUCTOR*/

#include <iostream>
using namespace std;

class baseclass
{
public:
    baseclass()
    {
        cout << "I am baseclass constructor" << endl;
    }
    ~baseclass()
    {
        cout << "I am baseclass destructor" << endl;
    }
};

int main()
{
    baseclass obj;
    return 0;
}
