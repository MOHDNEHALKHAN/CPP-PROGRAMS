/*PROGRAM USING FUNCTIONS IN OBJECTS*/

#include <iostream>

class distance
{
private:
    int feet;
    int inches;

public:
    void setdistance(int c, int d)
    {
        feet = c;
        inches = d;
    }

    void printdistance()
    {
        std::cout << feet << " ft " << inches << " inches ";
    }

    void add(distance d2)
    {
        feet += d2.feet;
        inches += d2.inches;
        // Adjust inches if greater than or equal to 12
        if (inches >= 12)
        {
            feet++;
            inches -= 12;
        }
    }
};

int main()
{
    distance d1, d2, sum;
    d1.setdistance(5, 8);
    d2.setdistance(3, 10);

    std::cout << "First distance: ";
    d1.printdistance();
    std::cout << std::endl;

    std::cout << "Second distance: ";
    d2.printdistance();
    std::cout << std::endl;

    sum.add(d1);
    sum.add(d2);

    std::cout << "Sum of distances: ";
    sum.printdistance();
    std::cout << std::endl;

    return 0;
}
