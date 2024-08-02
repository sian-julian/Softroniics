
#include <stdio.h>

int main()
{
    int i,j,temp;
    int a[10]={3,4,2,6,56,34,89,99,12,11};
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
           if(a[j]>a[i])
           {
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
           }
        }

    }
    printf("Sorted elements in the array:\n");
    for(i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }
    

    return 0;
}