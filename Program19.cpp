/*PROGRAM FOR FUNCTION OVERLOADING */

#include<iostream>
void printline();
void printline(char ch);
void printline(char ch,int n);
int main()
{
printline();
printline('*');
printline('*',20);

 int n ,i ,factorial = 1 ;
 std::cout<< "Enter a positive integer :";
 std::cin>> n;

 for(i=1 ; i<n ; i++)
 {
   factorial = factorial * i;
   std::cout<< "Factorial of "<< n <<" = "<< factorial << std::endl;
 }
 return 0;
}
void printline() {
    for (int i = 0; i < 25; ++i) {
        std::cout << "-";
    }
    std::cout << std::endl;
}

void printline(char ch) {
    for (int i = 0; i < 25; ++i) {
        std::cout << ch;
    }
    std::cout << std::endl;
}

void printline(char ch, int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << ch;
    }
    std::cout << std::endl;
}