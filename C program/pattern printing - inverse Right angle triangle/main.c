
#include <stdio.h>

int main()
{
    int i,j,k,n=5;
    
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=i-1;j++)
        {
            printf("  ");
        }
        for(k=0;k<=n-i;k++)
        {
            printf(" *");
        } 
        printf("\n");
    }

    return 0;
}