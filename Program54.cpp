/*PROGRAM USING SINGLE INHERITANCE*/

#include<iostream>
#include<string>

using namespace std;
class Animal
{
string name = "";
public :
int tail = 1;
int legs = 4;
};

class Dog: public Animal
{
public :
void voiceAction()
{
cout<<"Barks!";
}
};

int main()
{
Dog dog;
cout <<"Dog has "<<dog.legs<<" legs"<<endl;
cout <<"Dog has "<<dog.tail<<" tail"<<endl;
cout<<"Dog ";
dog.voiceAction();
}