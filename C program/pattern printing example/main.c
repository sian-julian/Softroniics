
#include <stdio.h>

int main()
{
    int i,j,n=5;
    
    for(i=0;i<n;i++) //row
    {
        for(j=0;j<n;j++) //column
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
