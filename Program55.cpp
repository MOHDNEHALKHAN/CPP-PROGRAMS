/*PROGRAM USING MULTIPLE INHERITANCE*/

#include<iostream>
using namespace std;

class student_marks {
protected:
    int rollNo, marks1, marks2;
public:
    void get() {
        cout << "Enter the roll no: ";
        cin >> rollNo;
        cout << "Enter the two highest marks: ";
        cin >> marks1 >> marks2;
    }
};

class cocurricular_marks {
protected:
    int comarks;
public:
    void getsm() {
        cout << "Enter co-curricular marks: ";
        cin >> comarks;
    }
};

class Result : public student_marks, public cocurricular_marks {
    int total_marks, avg_marks;
public:
    void display() {
        total_marks = marks1 + marks2 + comarks;
        avg_marks = total_marks / 3;
        cout << "\nRoll No: " << rollNo << "\nTotal marks: " << total_marks;
        cout << "\nAverage marks: " << avg_marks << endl;
    }
};

int main() {
    Result res;
    res.get();       // read subject marks
    res.getsm();     // read co-curricular activities marks
    res.display();   // display the total marks and average marks
    return 0;
}
