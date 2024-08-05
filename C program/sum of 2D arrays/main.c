
#include <stdio.h>

int main()
{
    int a[3][2]={{4,3},{8,7},{5,6}};
    int b[3][2]={{5,6},{1,2},{3,4}};
    int c[3][2],i,j;
    
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    
    printf("sum of elements of the array:\n");
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\n",c[i][j]);
        }
    }
    
    return 0;
}
