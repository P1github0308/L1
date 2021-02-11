//WAP to find the sum of n fractions.
#include<stdio.h>

struct Fraction
{
    int nr;
    int dr;
}f[20];

int main()
{
    int n = get_n();
    get_values(n,f);
    //int lcm = findlcm(n,f[n].dr);
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
        printf("%d\n",f.nr);
        //fract_array[i] = f;
    }  
    
}

int gcd(int a, int b) 
{ 
     if(b==0) return a;
     return gcd(b,a%b);
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


