/*PROGRAM USING 2D ARRAYS (3X4 MATRIX HAS 12 DATA ELEMENTS int A[3][4]; HAS 3 ROWS & 4 COLUMNS)*/

#include<iostream>
int main()
{
int a[2][3], b[2][3], c[2][3]; 
int i , j;
std::cout<<"Enter the elements for the first 2 x 3 matrix:\n";
for (i=0; i<2; i++) 
 for (j=0; j<3; j++)
{
std::cin >> a [i][j];
}
std::cout<<"Enter the elements for the Second 2 x 3 matrix:\n ";
for (i=0; i<2; i++) 
for (j=0; j<3; j++)
{
std::cin>> b[i][j];
c [i][j] = a[i][j] + b[i][j];
}
std::cout<<"The resultant matrix is:\n"; 
for (i=0; i<2; i++)
{
for (j=0; j<3; j++)
{
std::cout<< c[i][j]<< " ";
}
std::cout << std::endl;
}
}