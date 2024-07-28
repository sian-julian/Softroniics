
#include <stdio.h>
#include <math.h>

int power(int,int);
int main()
{
    int m,n,temp;
    printf("Enter a number:");
    scanf("%d",&m);
    printf("Enter the power you want:");
    scanf("%d",&n);
    
    temp=power(m,n);
    printf("%d",temp);
    
    return 0;
}

int power(int m,int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
       return m * power(m,n-1); 
    }
}