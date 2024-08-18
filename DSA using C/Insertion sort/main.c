
#include <stdio.h>

int main()
{
    int a[100],n,i,temp,j;
    printf("Enter the size:");
    scanf("%d",&n);
    printf("Enter the elements of the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && temp<a[j])
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    
    printf("Sorted array:\n");
    for(j=0;j<n;j++)
    {
        printf("%d\n",a[j]);
    }
    

    return 0;
}
