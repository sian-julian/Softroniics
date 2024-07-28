
#include <stdio.h>
int isprime(int n)
{
    int i;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}

int main()
{
    int m,n,i;
    printf("Enter the first interval:");
    scanf("%d",&m);
    printf("Enter the second interval:");
    scanf("%d",&n);
    
    for(i=m;i<n;i++)
    {
        if(isprime(i))
        {
            printf("%d ",i);
        }
    }

    return 0;
}