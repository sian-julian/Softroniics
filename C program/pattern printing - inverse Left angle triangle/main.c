
#include <stdio.h>

int main()
{
    int i,j,k,n=5;
    
    for(i=0;i<=n;i++) 
    {
        for(j=n;j>i;j--)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
 //for(j=0;j<n-i;j++) other logic