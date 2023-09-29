/*PROGRAM USING UNCONDITIONAL CONTINUE STATEMENT*/

#include<iostream>
using namespace std;

int main()
{
    int i = 1, n;
    cout << "Enter the number: ";
    cin >> n;
    
    while(i <= n)
    {
        if(i % 2 == 0)
            cout << i << " is even number\n";
        i++;
    }
    return 0;
}