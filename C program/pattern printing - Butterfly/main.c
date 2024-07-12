
#include <stdio.h>

int main()
{
    int i,j,n=5;
    
    for(i=0;i<n;i++)
    {
       for(j=0;j<=i;j++)
       {
           printf("*");
           
       }
       
       for(j=0;j<2*(n-i);j++)
       {
           printf(" ");
       }
       
       for(j=0;j<=i;j++)
       {
           printf("*");
       }
       printf("\n");
    }
    
    int p=10;
    for(i=0;i<p+2;i++)
    {
        for(j=0;j<1;j++)
        {
            printf("*");
        }
    }
    printf("\n");
    
    for(i=0;i<=n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            printf("*");
        }
        for(j=8;j<2*(n+i);j++)
        {
           printf(" ");
        }
        for(j=0;j<n-i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}