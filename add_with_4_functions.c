//Write a program to add two user input numbers using 4 functions.

#include<stdio.h>
float input()  
{
	float x;
	printf("Enter a number: ");
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
	a=input();
	b=input();
	sum=add(a,b);
	display(a,b,sum);
	return 0;
}
