/*PROGRAM USING PUTBACK()*/

#include<iostream>
#include<fstream>

int main() {
    std::ifstream file("test_file.txt"); // please create a test_file manually and type "Hello World" in it & then run the code
    char ch;
    
    file.get(ch);
    std::cout << ch << std::endl;  // It will display "H"

    file.putback(ch);
    file.get(ch);  // Use get() again to read the character that was put back
    std::cout << ch << std::endl;  // It will again display "H"

    file.get(ch);
    std::cout << ch << std::endl;  // It will display the next character after "H"

    file.close();

    return 0;
}