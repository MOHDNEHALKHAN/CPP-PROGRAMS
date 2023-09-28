/*PROGRAM USING NESTED IF STATEMENT*/

#include<iostream>
int main()
{
int student_marks = 30;
if(student_marks >= 70)
{
std::cout<< "Student pass with  A grade";
}
else
{
if(student_marks >= 50)
{
std::cout<< "Student pass with B grade";
}
else
{
if(student_marks>= 40)
{
std::cout<< "Student pass with C grade";
}
else 
{ 
std::cout << "Student Fails";
} 
 }
  } 
    }