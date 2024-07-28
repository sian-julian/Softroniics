
#include <stdio.h>

int main()
{
    int m,n,isprime,j,i;
    
    printf("Enter the first interval:");
    scanf("%d",&m);
    printf("Enter the last limit:");
    scanf("%d",&n);
    
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
    return 0;
}
