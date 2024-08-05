
#include <stdio.h>

int main()
{
    int a[100],b[100],c[100],i,n;
    printf("Enter the first array size:");
    scanf("%d",&n);
    printf("Enter the elements of the first array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("First array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    
    printf("Enter the second array size:");
    scanf("%d",&n);
    printf("Enter the elements of the second array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("Second array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",b[i]);
    }
    
    for(i=0;i<n;i++)
    {
        c[i]=a[i]+b[i];
    }
    
    
    printf("Sum of elements of both array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",c[i]);
    }
    
    
    return 0;
}