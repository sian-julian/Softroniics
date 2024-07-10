
#include <stdio.h>

int main()
{
    int i,j,k,n=5;
    
    for(i=0;i<=3;i++) 
    {
        for(j=0;j<1;j++)
        {
            printf("* ");
        }
    }
     for(i=0;i<=n;i++) 
    {
        for(j=0;j<=0;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
     for(i=0;i<=0;i++) 
    {
        for(j=0;j<n;j++)
        {
            if(j==0 || j>(3/2))
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
    
     for(i=0;i<n;i++)
    {
        for(j=0;j<=n+1;j++)
        {
             if(j==0 || j==n)
            {
                 printf("*   ");
            }
            else
            {
               printf(" ");
            }
        }
        printf("\n");
    }
    
     for(i=0;i<5;i++) 
    {
        for(j=0;j<1;j++)
        {
            printf("* ");
        }
    }
    return 0;
}
 