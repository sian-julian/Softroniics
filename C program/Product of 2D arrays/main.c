
#include <stdio.h>

int main()
{
    int a[3][2]={{5,4},{3,2},{8,9}};
    int b[2][3]={{8,9,2},{4,5,3}};
    int c[3][3]={0},i,j,k;
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<2;k++)
            {
                c[i][j]= c[i][j] + (a[i][k]*b[k][j]);
            }
        }
    }
    
    printf("Product of matrices:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\n",c[i][j]);
        }
    }

    return 0;
}