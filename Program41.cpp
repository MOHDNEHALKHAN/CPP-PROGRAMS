/*PROGRAM USING FRIEND CLASS &  SCOPE*/

#include<iostream>
using namespace std;

class x {
    static int count;
    int id;
public:
    x() {
        count++;
        id = count;
    }
    ~x() {
        count--;
        cout << "\nDestroying Id number " << id;
    }
    static void display_count() {
        cout << "\nCount: " << count << endl;
    }
    void showid() {
        cout << "Id: " << id << endl;
    }
};

int x::count = 0;

int main() {
    x::display_count();
    x x1, x2, x3;
    x::display_count();
    x1.showid();
    x2.showid();
    x3.showid();
    return 0;
}