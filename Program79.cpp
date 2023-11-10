/*PROGRAM USING (#define preprocessor)FUNCTIOM LIKE MACROS*/

#include<iostream>
#define MIN(a,b)(((a) < (b)) ? a:b)
int main()
{
int i,j;
i = 100;
j = 30;
std::cout<<"The minimum is : "<<MIN(i,j)<<std::endl;
return 0;
}