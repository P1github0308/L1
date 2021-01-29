//Write a program to add two user input numbers using one function.

#include<stdio.h>
  int main()
  {
      int a,b,x;
      printf("Enter number 1: ");
      scanf( "%d", &a);
      printf("Enter number 2: ");
      scanf("%d", &b);
      x = sum(a,b);
      printf("Sum of %d and %d is : %d ",a,b,x);
      return 0;
  }

int sum(int a, int b)
{ 
      int s =0;
      s = a+b;
      return s;
}
