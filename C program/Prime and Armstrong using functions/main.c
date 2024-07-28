
#include <stdio.h>
#include <math.h>
void prime(int n)
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
        printf("%d is a prime number\n\n",n);
    }
    else
    {
        printf("%d is not a prime number\n\n",n);
    }
}

void armstrong(int n)
{
    int count=0,sum=0,d,e,temp;
    temp=n;
    e=n;
    
    while(temp!=0)
    {
        temp=temp/10;
        count++;
    }
    printf("Count:%d\n",count);
    
    while(e>0)
    {
        d=e%10;
        sum=sum + pow(d,count);
        e=e/10;
    }
    
    if(sum==n)
    {
        printf("%d is a Armstrong number",n);
    }
    else
    {
        printf("%d is not a Armstrong number",n);
    }
    
}

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    prime(n);
    
    armstrong(n);
    
    return 0;
}