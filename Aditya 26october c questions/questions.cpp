//WCP to find the value of (a+b)^2 for scanned value of a and b from keyboard

#include<stdio.h>
int main()
{
    int a ,b;
    printf("Enter the value of a and b respectively: \n");
	scanf("%d \n %d", &a , &b);                //& this allocate the address to the value of the variable given by keyboard
    printf("\nThe value of (a+b)^2 is: %d",(a+b)*(a+b));
    return 0; 
}