//WAP to find the sum of n fractions.
#include<stdio.h>

int get_n();
void display(int,int[],int[],int,int,int[]);
int get_values(int,int[],int[]);
int numerators(int,int[],int[],int,int[]);
int gcd(int,int);
int findlcm(int,int []); 
int simplest_form(int,int);

struct Fraction
{   
    int n,nr[20],dr[20],num[20];
}f;

int main()
{
    f.n = get_n();
    get_values(f.n,f.nr,f.dr);
    int lcm = findlcm(f.n,f.dr);
    int numerator_value = numerators(f.n,f.nr,f.dr,lcm,f.num);
    display(f.n,f.nr,f.dr,numerator_value,lcm,f.num);
    simplest_form(numerator_value,lcm);
    return 0;
}

void display(int n,int nr[n],int dr[n],int numerator_value,int lcm,int num[n])
{
	int i;
	printf("\n\nThe equation is: \n   ");
    for(i=0;i<n;i++)
	{
		printf("%d/%d",nr[i],dr[i]);
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

int get_values(int n,int nr[n],int dr[n])
{
    for(int i=0; i<n;i++)
    {
        printf("Enter numerator of number %d: ",(i+1));
        scanf("%d",&nr[i]);
        printf("Enter denominator of number %d: ",(i+1));
        scanf("%d",&dr[i]);
    }
}

int get_n()
{
    printf("Enter the value of n: ");
    int n;
    scanf("%d", &n);
    return n;
}

int numerators(int n,int nr[n],int dr[n],int lcm,int num[n])
{
    int multiplying_factor[n],sum = 0;
    for(int i=0;i<n;i++)
    {   
        multiplying_factor[i]=lcm/dr[i];
        num[i] = nr[i]*multiplying_factor[i];
        sum = sum + num[i];
    }
    return sum;
}

int gcd(int a, int b) 
{ 
    if (b == 0) return a; 
    return gcd(b, a % b); 
}

int findlcm(int n,int arr[]) 
{ 
    int ans = arr[0]; 
    for (int i = 1; i < n; i++) 
    ans = ((arr[i] * ans)) / (gcd(arr[i], ans)); 
    return ans; 
}

int simplest_form(int numerator_value,int lcm)
{
    int _gcd_ = gcd(numerator_value,lcm);
    numerator_value = numerator_value/_gcd_;
    lcm = lcm/_gcd_;
    printf("The simplified sum is %d/%d",numerator_value,lcm);
    
}




