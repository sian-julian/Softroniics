
#include <stdio.h>

int main()
{
    int i,j,k,n=6;
     
    for(i=0;i<1;i++)
    {
        for(j=0;j<=n;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<=n;j++)
        {
            if(j==0 || j==n)
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
    
     for(i=0;i<1;i++)
    {
        for(j=0;j<=n;j++)
        {
            printf("* ");
        }
    }
    
    return 0;
} 
