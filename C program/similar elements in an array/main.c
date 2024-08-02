
#include <stdio.h>

int main()
{
    int a[100],sum=0,i,n,j;
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
        sum=sum+a[i];
    }
    printf("Sum of all elements:%d\n",sum);
    
    printf("Similar elements in the array:");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                printf("%d ",a[i]);
                break;
            }
        }
    }
    
    return 0;
}
