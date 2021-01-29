//Write a program to find the volume of a tromboloid using one function

#include<stdio.h>
float main()
{
    float h,d,b,v;
    printf("Enter height of tromboloid: ");
    scanf("%f", &h);
    printf("Enter breadth of tromboloid: ");
    scanf("%f", &b);
    printf("Enter depth of tromboloid: ");
    scanf("%f", &d);
    v = ((h*d)+d)/(b*3);
    printf("Volume of tromboloid: %f",v);
    return 0; 
}
