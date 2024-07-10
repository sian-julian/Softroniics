
#include <stdio.h>

int main()
{
    int i,j,n=1;
    
    for(i=1;i<=5;i++) //row
    {
        int p=i;
        for(j=1;j<=i;j++) //column
        {
            printf("%d ",p);
            p++;
        }
        printf("\n");
        
        
    }

    return 0;
}
