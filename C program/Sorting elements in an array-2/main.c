
#include <stdio.h>

int main()
{
    int i,j,temp;
    int a[100],n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the elements of the array:\n");
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
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
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    

    return 0;
}