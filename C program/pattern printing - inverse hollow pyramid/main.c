
#include <stdio.h>

int main()
{
    int i,j,k,n=5;
    
    for(i=0;i<1;i++)
    {
        for(j=0;j<=n;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=i;k++)
        {
            printf(" ");
        }
        for(j=0;j<n;j++)
        {
            if(j==0 || j==n-i)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}