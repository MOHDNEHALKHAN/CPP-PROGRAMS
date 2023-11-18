/*PROGRAM USING REMOVE()*/

#include<iostream>
int main()
{
if(remove("myfile.txt")!=0) // first create the file manually & run the program
perror("Error deleting file");
else
puts("file successfully deleted");
return 0;
}