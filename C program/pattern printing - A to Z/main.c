
#include <stdio.h>

int main()
{
    int i,j;
    char n='A';
    for(i=0;i<=5;i++) //row
    {
        for(j=-1;j<i;j++) //column
        {
            printf("%c ",n);
        }
        printf("\n");
        n++;
    }

    return 0;
}
