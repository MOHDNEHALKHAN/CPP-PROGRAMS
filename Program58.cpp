/*PROGRAM USING REAL WORLD EXAMPLE FOR INHERITANCE*/

#include<iostream>
#include<string>
using namespace std;

class Animal {
public:
    string name;
    int tail;
    int legs;
    Animal() : name(""), tail(1), legs(4) {}
};

class Dog : public Animal {
public:
    void Action() {
        cout << "Barks" << endl;
    }
};

class Puppy : public Dog {
public:
    void Weeping() {
        cout << "Weeps" << endl;
    }
};

int main() {
    Puppy puppy;
    cout << "Puppy has " << puppy.legs << " legs" << endl;
    cout << "Puppy has " << puppy.tail << " tail" << endl;
    cout << "Puppy ";
    puppy.Action();
    cout << "Puppy ";
    puppy.Weeping();
    return 0;
}
