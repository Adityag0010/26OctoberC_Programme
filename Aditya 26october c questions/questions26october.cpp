//WCP(write a c programme ) to find the Area and perimeter of any square by 
//Scanning the side length through keyboard


#include<stdio.h>
int main()
{
    int side;
    printf("Enter the length of the side: \n");
    scanf("%d", &side);                //& this allocate the address to the value of the variable given by keyboard
    printf("\nside length is : %d\n" , side);
    printf("Area of the square is : %d,\nand the Perimeter of the square is : %d" , side*side , 4*side);
    return 0; 
}