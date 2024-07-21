
#include <stdio.h>
int prime(int);

int main()
{
    int n;
    
    printf("Enter a number:");
    scanf("%d",&n);
    prime(n);
    return 0;
}

int prime(int n)
{
    int i;
    int isprime=1; 
    
    if(n<=1)
    {
        isprime=0;
    }
    else
    {
        for(i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                isprime=0;
                break;
            }
        }
    }
    
    if(isprime)
    {
        printf("%d is a prime number",n);
    }
    else
    {
        printf("%d is not a prime number",n);
    }
}
