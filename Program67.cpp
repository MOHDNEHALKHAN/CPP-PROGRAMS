/*PROGRAM USING RUN TIME POLYMORPHISM  (VIRTUAL FUNCTION)*/

#include <iostream>

class base
{
public:
    virtual void Show()    //virtual function
    {
        std::cout << "base - Manipal University" << std::endl;
    }
};

class derv1 : public base
{
public:
    void Show() override
    {
        std::cout << "derv1 - Directorate of Online Education" << std::endl;
    }
};

class derv2 : public base
{
public:
    void Show() override
    {
        std::cout << "derv2 - Dr Santosh Kumar" << std::endl;
    }
};

int main()
{
    derv1 dv1;
    derv2 dv2;
    base *ptr;

    ptr = &dv1;
    ptr->Show();

    ptr = &dv2;
    ptr->Show();

    return 0;
}