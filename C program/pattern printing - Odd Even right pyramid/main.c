
#include <stdio.h>

int main()
{
    int i,j,a=1,n=5;
    
    for(i=0;i<=n;i++) //row
    {
        for(j=0;j<i;j++) //column
        {
            printf("%d ",a);
            a=a+2;
        }
        printf("\n");
    }
    int p=30;
    
    for(i=0;i<=n;i++) //row
    {
        for(j=0;j<n-i;j++) //column
        {
            printf("%d ",p);
            p=p-2;
        }
        printf("\n");
    }
    
   
    return 0;
}
