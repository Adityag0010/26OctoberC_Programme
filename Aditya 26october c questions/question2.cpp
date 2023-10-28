// WCP to execute sum subtraction multiplication division modulus by scanning to values a and b from keyboard

#include<stdio.h>
int main(){
	int a , b; 
	printf("Enter the value of a: \n");
	scanf("%d",&a);
	printf("\nEnter the value of b: \n");
	scanf("%d",&b);
	printf("sum: %d,\nsubtraction: %d,\nmultiplication:  %d,\ndivision: %d,\nmodulus: %d", a+b , a-b , a*b , a/b ,a%b);

	return 0;
}