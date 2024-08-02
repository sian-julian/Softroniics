
#include <stdio.h>

int main()
{
    int a[100],i,j,temp,n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the elements of the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nArray elements:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    
    for(i=0,j=n-1;i<j;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    
    printf("Reversed array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    
    return 0;
}
