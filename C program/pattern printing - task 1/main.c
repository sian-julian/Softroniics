
#include <stdio.h>

int main()
{
    int i,j,k,n=5;
    
    //first pyramid
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            printf(" ");
        }
        for(k=0;k<=i;k++)
        {
            printf("* ");
        } 
        printf("\n");
    }
    
    //second pyramid
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            printf(" ");
        }
        for(k=0;k<=i;k++)
        {
           printf("* ");
        } 
        printf("\n");
    }
    
    //normal pattern
    for(i=0;i<n;i++)
    {
        for(k=0;k<=n-1;k++)
        {
             if(k==0 || k==4)
            {
                 printf(" ");
            }
            else
            {
                printf(" *");
            }
        }
        printf("\n");
    }

    return 0;
}