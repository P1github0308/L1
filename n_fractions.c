#include<stdio.h>
typedef struct
{
    int nr;
    int dr;
}fraction;

int get_n()
{
    printf("Enter the value of n: ");
    int n;
    scanf("%d", &n);
    return n;
}

int gcd(int a, int b) 
{ 
    int i, gcd;
    for(i=1; i <= a && i <= b; ++i)
    {
        if(a%i==0 && b%i==0)
            gcd = i;
    }
    return gcd;
}

fraction input_one()
{
    fraction f;
    printf("Enter numerator value: ");
    scanf("%d",&f.nr);
    printf("Enter denominator value: ");
    scanf("%d",&f.dr);
    return f;
}

void input_n(int n,fraction fract[n])
{
    for(int i=0;i<n;i++)
    {
        fract[i] = input_one();
    }
}
fraction simplest_form(fraction simplest)
{
    int _gcd_ = gcd(simplest.nr,simplest.dr);
    simplest.nr = simplest.nr/_gcd_;
    simplest.dr = simplest.dr/_gcd_;
    return simplest;
}

fraction compute_two_fractions(fraction f1,fraction f2)
{
    fraction ans;
    ans.nr = f1.nr*f2.dr+f1.dr*f2.nr;
    ans.dr = f1.dr*f2.dr;
    ans = simplest_form(ans);
    return ans;
}

fraction compute_n_fractions(int n,fraction sums[n])
{
    fraction sum;
    sum = sums[0];
    for(int i = 1;i<n;i++ )
    {
        sum = compute_two_fractions(sum,sums[i]);
    }
    return sum;
}

void display(int n,fraction f[n],fraction sum)
{
	int i;
	printf("\n\nThe equation is: \n   ");
    for(i=0;i<n;i++)
	{
		printf("%d/%d",f[i].nr,f[i].dr);
		if(i<n-1){printf(" + ");}
	}
	printf("\n = %d/%d\n",sum.nr,sum.dr);
	
}

int main()
{
    int n = get_n();
    fraction f[n],answer;
    input_n(n,f);
    answer = compute_n_fractions(n,f);
    display(n,f,answer);
    return 0;
}
