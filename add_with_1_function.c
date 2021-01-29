//Write a program to add two user input numbers using one function.

#include<stdio.h>
int main()
  {
      float a,b,sum = 0.0;
      printf("Enter number 1: ");
      scanf( "%f", &a);
      printf("Enter number 2: ");
      scanf("%f", &b);
      sum = a + b;
      printf("The sum of %f and %f is : %f",a,b,sum);
      return 0;
  }
      
