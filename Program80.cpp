/*PROGRAM USING CONDITIONAL COMPILATION*/

#include<iostream>
#define DEBUG
#define MKSTR(x) #x
#define MIN(a,b) (((a) < (b)) ? (a) : (b))

int main()
{
    int i, j;
    i = 100;
    j = 30;

    #ifdef DEBUG
    std::cerr << "Trace: Inside main function" << std::endl;
    #endif

    #if 0
    /* This is a commented part */
    std::cout << MKSTR(HELLO C++) << std::endl;
    #endif

    std::cout << "The minimum is " << MIN(i, j) << std::endl;

    #ifdef DEBUG
    std::cerr << "Trace: Coming out of the main function" << std::endl;
    #endif

    return 0;
}