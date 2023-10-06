/*PROGRAM USING ARRAY AS ARGUMENT TO FUNCTIONS*/

#include<iostream>
void display(int arr[3][4]);
int main()
{
 int matrix1[3][4], matrix2[3][4], sum[3][4];
 int i,j;
 std::cout<<"Enter the elements of matrix one\n";
 for(i=0; i<3; i++)
 {
    for(j=0; j<4 ; j++)
    {
        std::cin>>matrix1[i][j];
    }
 }
 std::cout<<"Enter the elements of matrix two\n";
 for(i=0; i<3 ; i++)
 {
   for(j =0 ; j<4 ; j++)
   {
     std::cin>>matrix2[i][j];
   }
 }
 for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
 sum[3][4] = matrix1[i][j] + matrix2[i][j];
 std::cout<<"Sum is"<< std::endl;
 display(sum);
 return 0;
}
void display(int arr[3][4])
{
    for(int i =0 ; i<3 ;i++)
    {
      for(int j=0; j<4 ; j++)
        {
      std::cout<<arr[i][j]<<"\t";
        }
        std::cout<<std::endl;
    }
}