/*PROGRAM USING ENUMERATED DATA TYPE*/

#include <iostream>
enum weekday { sun , mon , tue , wed , thu , fri ,sat};
int main()
{
weekday day1 , day2;
day1 = mon;
day2 = wed;
int diff = day2 - day1;
std::cout<< "Days between Day1 and Day2 :"<<diff << std::endl;
if(day1<day2){
std::cout<<"Day1 comes before Day\n";
}
else
std::cout<<"Day1 comes after Day2\n";
return 0;
}