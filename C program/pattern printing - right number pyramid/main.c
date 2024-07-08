
#include <stdio.h>

int main()
{
    int i,j,n=1,p=30;
    
    for(i=0;i<=5;i++) //row
    {
        for(j=0;j<i;j++) //column
        {
            printf("%d ",n);
            n=n+2;
        }
        printf("\n");
        
    }
    
    for(i=0;i<=5;i++) //row
    {
        for(j=0;j<p-i;j++) //column
        {
            printf("%d ",p);
            p=p-2;
        }
        printf("\n");
        
    }

    return 0;
}
