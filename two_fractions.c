//WAP to find the sum of two fractions.

#include<stdio.h>
typedef struct
{
	int n;
	int d;
} fraction;

fraction input(int n)
{
	fraction x;
	printf("Enter the value of numerator for fraction %d : ",n);
	scanf("%d",&x.n);
	printf("Enter the value of denominator for fraction %d : ",n);
	scanf("%d",&x.d);
	return x;
}
int find_gcd(int a, int b)
{
    int temp;
	while (a!=0)
	{
	    temp=a;
	    a=b%a;
	    b=temp;
	}
	return b;
}
fraction simplify(fraction sum)
{
	int gcd=find_gcd(sum.n,sum.d);
	sum.n=sum.n/gcd;
	sum.d=sum.d/gcd;
	return sum;
}
fraction compute_sum(fraction f1, fraction f2)
{
    fraction sum;
    sum.n=(f1.n*f2.d)+(f2.n*f1.d);
    sum.d=f1.d*f2.d;
	sum=simplify(sum);
    return sum;
}
void output(fraction f1, fraction f2, fraction sum)
{
	printf("The sum of %d/%d and %d/%d is: %d/%d.\n",f1.n,f1.d,f2.n,f2.d,sum.n,sum.d);
}
int main()
{
	fraction f1,f2,sum;
	f1=input(1);
	f2=input(2);
	sum=compute_sum(f1,f2);
	putput(f1,f2,sum);
	return 0;
}
