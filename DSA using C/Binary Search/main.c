
#include <stdio.h>
int binary(int a[],int n,int data)
{
    int l=0,r=n-1,mid;
    
    while(l<=r)
    {
        mid=(l+r)/2;
        if(data==a[mid])
        {
            return mid;
        }
        else if(data>a[mid])
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    return -1;
}

int main()
{
    int a[100],i,n,data,temp,j,result;
    printf("Enter the size:");
    scanf("%d",&n);
    printf("Enter the elements of the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    
    printf("Sorted array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    
    printf("\nEnter the element to search:");
    scanf("%d",&data);
    result=binary(a,n,data);
    
    if(result==-1)
    {
        printf("Element not found");
    }
    else
    {
        printf("Element found at position %d",result);
    }
    return 0;
}
