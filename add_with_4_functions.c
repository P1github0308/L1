//Write a program to add two user input numbers using 4 functions.

#include<stdio.h>
float input()  
{
	float x;
	scanf("%f",&x);
	return x;
}
float add(float a,float b)  
{
	return a+b;
}
void display(float a, float b, float sum) 
{
	printf("The sum of %f and %f is: %f\n",a,b,sum);
}
int main() 
{
	float a,b,sum;
	printf("Enter number 1: ");
	a=input();
	printf("Enter number 2: ");
	b=input();
	sum=add(a,b);
	display(a,b,sum);
	return 0;
}


