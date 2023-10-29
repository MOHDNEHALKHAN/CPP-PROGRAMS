/*PROGRAM USING HIERARCHICHAL INHERITANCE*/

#include<iostream>
using namespace std;

class Shape   // shape class -> base class
{
public:
    int x, y;
    void get_data(int n, int m)
    {
        x = n;
        y = m;
    }
};

class Rectangle : public Shape // inherit shape class (fixed typo)
{
public:
    int rect_area()
    {
        int area = x * y;
        return area;
    }
};

class Triangle : public Shape   // inherit shape class
{
public:
    float triangle_area()  // corrected function name from tri_area to triangle_area
    {
        float area = 0.5 * x * y;
        return area;
    }
};

class Square : public Shape  // inherit shape class
{
public: // Added public access specifier for function visibility
    int sq_area()   // corrected function name from sq_area to sq_area
    {
        int area = 4 * x;
        return area;
    }
};

int main()
{
    Rectangle r;    // Fixed capitalization from Rectangle to r
    Triangle t;
    Square s;
    int length, breadth, base, height, side;

    // area of a rectangle
    std::cout << "Enter the length and breadth of a rectangle:";
    cin >> length >> breadth;
    r.get_data(length, breadth);
    int rect_area = r.rect_area();
    std::cout << "Area of the rectangle = " << rect_area << std::endl;

    // area of a triangle
    std::cout << "Enter the base and height of a triangle:";
    cin >> base >> height;
    t.get_data(base, height);   // Changed r.get_data to t.get_data
    float tri_area = t.triangle_area();  // Changed tri_area to triangle_area
    std::cout << "Area of the triangle = " << tri_area << std::endl;

    // area of a square
    std::cout << "Enter the side length of a square:";  // Fixed typo in the output message
    cin >> side;
    s.get_data(side, side);
    int sq_area = s.sq_area();   // Changed _area to sq_area
    std::cout << "Area of a square = " << sq_area << std::endl;
    return 0;
}
