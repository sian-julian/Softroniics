
#include <stdio.h>
void prime(int m,int n)
{
    int isprime,j,i;
    
    for(i=m;i<=n;i++)
    {
        isprime=1;
        if(i<=1)
        {
            isprime=0;
        }
        else
        {
            for(j=2;j*j<=i;j++)
            {
                if(i%j==0)
                {
                    isprime=0;
                    break;
                }
            }
        }
        if(isprime)
        {
            printf("%d ",i);
        }
    }
}

int main()
{
    int m,n;
    printf("Enter the first interval:");
    scanf("%d",&n);
    printf("Enter the second interval:");
    scanf("%d",&n);
    
    prime(m,n);

    return 0;
}