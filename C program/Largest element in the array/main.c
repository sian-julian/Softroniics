
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
    printf("\nArray elements:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
            }
        }
    }
    printf("Largest element in the array is:%d",temp);
    
    return 0;
}