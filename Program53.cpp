/*PROGRAM USING PUBLIC , PRIVATE & PROTECTED INHERITANCE*/

#include<iostream>
#include<string>
#include<cstring>

using namespace std;

class employee
{
protected:
    int empno;
    char ename[25];

public:
    employee()
    {
        empno = 0;
        strcpy(ename, "");
    }

    employee(int n, const char ch[25])
    {
        empno = n;
        strcpy(ename, ch);
    }

    void display()
    {
        cout << "Emp code: " << empno << endl;
        cout << "Name: " << ename << endl;
    }
};

class manager : public employee
{
protected:
    float basic;
    float hra;

public:
    manager() : employee()
    {
        basic = 0.0;
        hra = 0.0;
    }

    manager(int n, const char ch[25], float i, float j) : employee(n, ch)
    {
        basic = i;
        hra = j;
    }

    void display()
    {
        employee::display();
        cout << "Basic: " << basic << endl;
        cout << "Hra: " << hra << endl;
    }
};

int main()
{
    employee e1(106, "amit");
    manager m1(205, "pawan", 40000.00, 5000.00);
    e1.display();
    m1.display();
    return 0;
}