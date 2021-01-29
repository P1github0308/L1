//WAP to find the volume of a tromboloid using 4 functions.

#include<stdio.h>
float input(char var) 
{
	float x;
	printf("Enter the value of %c: ",var);
	scanf("%f",&x);
	return x;
}
float volume(float b, float d, float h) 
{
	float v;
	v= ((h*d)+d)/(b*3);
	return v;
}
void output(float vol) 
{
	printf("Volume of tromboloid: %f\n",vol);
}
int main() 
{  
    //sending name of element as argument
	float h,d,b,vol;
	h=input('h');
	b=input('b');
	d=input('d');
	vol=volume(b,d,h);
	output(vol);
	return 0;
}
