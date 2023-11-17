/*PROGRAM USING GETLINE()*/

#include<iostream>
#include<fstream>

int main() {
    // if we have "Hello World" in test_file.txt
    std::ifstream File("test_file.txt"); // please create a test_file manually and type "Hello World" in it & then run the code
    char arr[10];   
  
    // read until one of these happens:
    // 1) you have read 9 characters
    // 2) you meet the letter "o"
    // 3) there is a new line
    File.getline(arr, 10, 'o');

    // It should display "Hell"
    std::cout << arr << std::endl;

    File.close();
    
    return 0;
}