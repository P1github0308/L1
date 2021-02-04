//Write a program to find the sum of n different numbers using 4 functions

#include<stdio.h>
int get_input(int n,float a[n])
{	
	for(int i = 0;i<n;i++)
	{
        printf("Enter number %d: " ,i+1);
        scanf("%f",&a[i]);
    }
return a[n];
}
void display(int n,float a[n],float sum)
{
	int i;
	printf("The equation :\n");
    for(i=0;i<n;i++)
	{
		printf("%.2f",a[i]);
		if(i<n-1){printf(" + ");}
	}
	printf(" = %.2f\n",sum);
	printf("The sum is %.2f",sum);
}
int add(int n,float a[n])
{
	float sum = 0.0;
	for(int i = 0; i<n;i++)
	{
		sum = sum + a[i];
	}
	return sum;
}
int get_n()
{
    printf("Enter the value of n: ");
    int n;
    scanf("%d",&n);
    return n;
    
}
int main()
{
	int n = get_n();
    float a[n];
	a[n] = get_input(n,a);
	float sum = add(n,a);
	display(n,a,sum);
	return 0;
}


