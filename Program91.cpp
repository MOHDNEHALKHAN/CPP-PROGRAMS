/*PROGRAM USING READ() & WRITE()*/

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

int main()
{
    std::fstream File("test_file.txt", std::ios::out | std::ios::trunc); // Correct file opening mode

    char arr[19];
    strcpy(arr, "Manipal University"); // Copy data to the array

    File.write(arr, strlen(arr)); // Write the entire array to the file

    File.seekg(std::ios::beg); // Go to the beginning of the file

    char read_array[10]; // Allocate space for the read data

    File.read(read_array, 10); // Read 10 characters from the file

    std::cout << read_array << std::endl; // Display the read data

    File.close(); // Close the file with correct semicolon
}