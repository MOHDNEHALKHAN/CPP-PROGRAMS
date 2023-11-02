/*PROGRAM USING COMPILE TIME POLYMORPHISM (FUNCTION OVERLOADING)*/

#include <iostream>
#include <cstdlib>
#include <conio.h>
#define pi 3.14

class Areacalculate
{
public:
    void area(int);         // circle
    void area(int, int);     // rectangle
    void area(float, int, int); // triangle
};

void Areacalculate::area(int a)
{
    std::cout << "Area of circle: " << pi * a * a;
}

void Areacalculate::area(int a, int b)
{
    std::cout << "Area of rectangle: " << a * b;
}

void Areacalculate::area(float t, int a, int b)
{
    std::cout << "Area of triangle: " << t * a * b;
}

int main()
{
    int ch;
    int a, b, r;
    char choice;
    Areacalculate obj;
    std::cout << "\n\t\t Function overloading ";
    do
    {
        std::cout << "\n1. Area of circle\n2. Area of rectangle\n3. Area of Triangle\n4. Exit\nEnter your choice: ";
        std::cin >> ch;
        switch (ch)
        {
        case 1:
            std::cout << "Enter Radius of the circle: ";
            std::cin >> r;
            obj.area(r);
            break;

        case 2:
            std::cout << "Enter sides of the rectangle: ";
            std::cin >> a >> b;
            obj.area(a, b);
            break;

        case 3:
            std::cout << "Enter sides of the triangle: ";
            std::cin >> a >> b;
            obj.area(0.5, a, b);
            break;

        case 4:
            exit(0);
        default:
            std::cout << "Invalid choice!";
        }
        std::cout << "\nDo you want to continue? (y/n): ";
        std::cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    getch();
    return 0;
}
