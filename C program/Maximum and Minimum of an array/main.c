
#include <stdio.h>

int main()
{
    int a[100],i,j,n,lrg,sml;
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
                lrg=a[i];
            }
            else
            {
                sml=a[i];
            }
        }
    }
    printf("Maximum in the array is:%d\n",lrg);
    printf("Minimum in the array is:%d",sml);
    
    return 0;
}