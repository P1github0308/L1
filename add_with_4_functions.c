//Write a program to add two user input numbers using 4 functions.

#include<stdio.h>
float input(int num)  
{
	printf("Enter number %d: ",num);
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
	int num = 1;
	float a,b,sum;
	a=input(num);
	num++;
	b=input(num);
	sum=add(a,b);
	display(a,b,sum);
	return 0;
}

