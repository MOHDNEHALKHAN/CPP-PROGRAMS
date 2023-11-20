/*PROGRAM USING CLASS TEMPLATES WITH MULTIPLE PARAMETERS*/

#include <iostream>
using namespace std;
template <class T1, class T2>
class demo
{
private:
    T1 a;
    T2 b;

public:
    demo(T1 x, T2 y)
    {
        a = x;
        b = y;
    }
    void show()
    {
        cout << a << " and " << b << "\n";
    }
};
int main()
{
    demo<float, int> d1(1.11, 567);
    demo<int, char> d2(200, 'A');
    d1.show();
    d2.show();
    return 0;
}