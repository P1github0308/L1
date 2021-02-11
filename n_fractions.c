//WAP to find the sum of n fractions.
#include<stdio.h>

struct Fraction
{
    int nr;
    int dr;
};

int main()
{
    int n = get_n();
    int num[n];     
    struct Fraction f[n];
    get_values(n,f);
    int lcm = findlcm(n,f);
    int numerator_value = numerators(n,f,lcm,num);
    display(n,f,numerator_value,lcm,num);
    simplest_form(numerator_value,lcm);
    return 0;
}

int get_n()
{
    printf("Enter the value of n: ");
    int n;
    scanf("%d", &n);
    return n;
}

int get_values(int n,struct Fraction f)
{ 
    int fract_array[n];
    for(int i=0; i<n;i++)
    {
        printf("Enter numerator of number %d: ",(i+1));
        scanf("%d",&f.nr);
        printf("Enter denominator of number %d: ",(i+1));
        scanf("%d",&f.dr);
    }  
    
}

void display(int n,struct Fraction f,int numerator_value,int lcm,int num[n])
{
	int i;
	printf("\n\nThe equation is: \n   ");
    for(i=0;i<n;i++)
	{
		printf("%d/%d",f.nr,f.dr);
		if(i<n-1){printf(" + ");}
	}
	printf("\n=> ");
	for(i=0;i<n;i++)
	{
	    printf("%d/%d",num[i],lcm);
		if(i<n-1){printf(" + ");}
	}
	printf("\n = %d/%d\n",numerator_value,lcm);
	
}

int gcd(int a, int b) 
{ 
     if(b==0) return a;
     return gcd(b,a%b);
}

int findlcm(int n,struct Fraction f) 
{ 
    int ans = f.dr; 
    for (int i = 1; i < n; i++) 
    ans = ((f.dr * ans)) / (gcd(f.dr, ans)); 
    return ans; 
}

int numerators(int n,struct Fraction f,int lcm,int num[n])
{
    int multiplying_factor[n],sum = 0;
    for(int i=0;i<n;i++)
    {   
        multiplying_factor[i]=lcm/f.dr;
        num[i] = f.nr*multiplying_factor[i];
        sum = sum + num[i];
    }
    return sum;
}

int simplest_form(int numerator_value,int lcm)
{
    int _gcd_ = gcd(numerator_value,lcm);
    numerator_value = numerator_value/_gcd_;
    lcm = lcm/_gcd_;
    printf("The simplified sum is %d/%d",numerator_value,lcm);
    
}



