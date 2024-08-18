
#include <stdio.h>

int main()
{
    int a[100],i,j,n,temp;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the elements of the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    
    printf("\nSorted array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }

    return 0;
}