/*PROGRAM USING PURE VIRTUAL FUNCTION*/

#include <iostream>

class Exforsys
{
public:
    virtual void example() = 0; // denotes pure virtual function declaration
};

class Exf1 : public Exforsys
{
public:
    void example() override
    {
        std::cout << "Welcome ";
    }
};

class Exf2 : public Exforsys
{
public:
    void example() override
    {
        std::cout << "to Manipal University-Jaipur";
    }
};

int main()
{
    Exforsys *arra[2];
    Exf1 e1;
    Exf2 e2;
    arra[0] = &e1;
    arra[1] = &e2;
    arra[0]->example();
    arra[1]->example();
    return 0;
}
