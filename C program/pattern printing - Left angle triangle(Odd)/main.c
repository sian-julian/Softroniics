
#include <stdio.h>

int main()
{
    int i,j,n=1;
    
    for(i=0;i<=5;i++) //row
    {
        for(j=0;j<i;j++) //column
        {
            printf("%d ",n);
            n=n+2;
        }
        printf("\n");
        
    }

    return 0;
}
