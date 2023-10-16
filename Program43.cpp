/*PROGRAM USING DEFAULT CONSTRUCTOR*/

#include <iostream>  
class cube
{
public:
    int side;  
};

int main()         // [output -> or any random value]
{
    cube c;
    std::cout << c.side;  
    return 0;  
}