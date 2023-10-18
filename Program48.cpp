/*PROGRAM FOR OVERLOADING THE INCREMENT OPERATOR FOR A CLASS*/

#include<iostream>

class counter
{
  unsigned int c;
  public:
  counter()
 {
   c = 0;
 }
 counter(int num)
 {
   c = num;
 }
 int getcount()
 {
  return c;
 }
 counter operator++()
 {
  c++;
   return counter(c);
 }
  counter operator++(int)
    {
        counter temp(c);
        ++c;
        return temp;
    }
};

int main()
{
counter c1,c2;
c1++;
c2 = ++c1;
std::cout<< c1.getcount()<< std::endl;
std::cout<< c2.getcount();
return 0;
}