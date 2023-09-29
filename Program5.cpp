/*PROGRAM USING UNCONDITIONAL BREAK STATEMENT*/

#include<iostream>
int main() {
    int i = 1, total = 0;

    while (i < 10) {
        total = total + i;
        i++;

        if (i == 5) {
            break;
        }
    }

    std::cout << "Total: " << total << std::endl;
    return 0;
}