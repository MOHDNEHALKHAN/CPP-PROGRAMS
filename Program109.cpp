/*PROGRAM WITH MULTIPLE CATCH STATEMENTS*/

#include <iostream>

using namespace std;

void test(int x)
{
    try
    {
        if (x == 1)
            throw x; // int
        else if (x == 0)
            throw 'x'; // char
        else if (x == -1)
            throw 1.0; // double
        cout << "end of try block\n";
    }
    catch (char c) // catch1
    {
        cout << "Caught a character: " << c << "\n";
    }
    catch (int m) // catch2
    {
        cout << "Caught an integer: " << m << "\n";
    }
    catch (double d) // catch3
    {
        cout << "Caught a double: " << d << "\n";
    }
    cout << "End of try-catch system\n";
}

int main()
{
    cout << "Testing multiple catches\n";
    cout << "x == 1 \n";
    test(1);
    cout << "x == 0 \n";
    test(0);
    cout << "x == -1 \n";
    test(-1);
    cout << "x == 2 \n";
    test(2);
    return 0;
}
