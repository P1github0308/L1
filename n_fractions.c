//WAP to find the sum of n fractions.
#include<stdio.h>
typedef struct
{
	  int n;
	  int d;
} fraction;
int get_n()
{
	  int n;
	  printf("Enter the number of fractions n to be added: ");
      scanf("%d",&n);
      return n;
}
void get_fractions(int n, fraction fract[n])
{
	  fraction f;
	  for(int i=0;i<n;i++)
	  {
		    printf("Enter the numerator of fraction %d: ",i+1);
		    scanf("%d",&f.n);
		    printf("Enter the denominator of fraction %d: ",i+1);
		    scanf("%d",&f.d);
		    fract[i]=f;
	  }
}
int compute_gcd(int a, int b)
{
	  int temp;
	  while(a!=0)
	  {
		    temp=a;
		    a=b%a;
		    b=temp;
	  }
	  return b;
}
fraction simplify(fraction sum)
{
	  int gcd;
	  gcd=compute_gcd(sum.n, sum.d);
	  sum.n=sum.n/gcd;
	  sum.d=sum.d/gcd;
	  return sum;
}
fraction compute_sum_of_two( fraction f1, fraction f2)
{
	  fraction sum;
	  sum.n=(f1.n*f2.d+f2.n*f1.d);
	  sum.d=f1.d*f2.d;
	  sum=simplify(sum);
	  return sum;
}
fraction compute_total_sum(int n, fraction array[n])
{
	  fraction sum;
	  sum=array[0];
	  for(int i=1;i<n;i++)
	  {
		    sum=compute_sum_of_two(sum, array[i]);
	  }
	  return sum;
}
void display_sum(int n, fraction fract[n], fraction sum)
{
	printf("The sum ");
	for(int i=0;i<n-1;i++)
	{
		printf("%d/%d + ",fract[i].n,fract[i].d);
	}
	printf("%d/%d is: %d/%d.\n", fract[n-1].n, fract[n-1].d, sum.n, sum.d);
}
int main()
{
    	  int n;
    	  n=get_n();
    	  fraction fract[n], sum;
	  get_fractions(n,fract);
	  sum=compute_total_sum(n,fract);
	  display_sum(n,fract,sum);
	  return 0;
}
