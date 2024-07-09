
#include <stdio.h>

int main()
{
    int i,j;
    
    for(i=0;i<=5;i++) 
    {
        char n='A';
        for(j=0;j<=i;j++) 
        {
            printf("%c ",n);
            n++;
        }
        
        printf("\n");
    }

    return 0;
}
