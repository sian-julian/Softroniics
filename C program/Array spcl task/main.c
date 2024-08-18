
#include <stdio.h>

int main()
{
    int a[100],n,i,s,e,temp,j,find,flag,again;
    char ch;
    
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("\nEnter the elments of the array:");
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the starting index:");
    scanf("%d",&s);
    printf("\nEnter the ending index:");
    scanf("%d",&e);
    
    for(i=s;i<e;i++)
    {
        for(j=i+1;j<e;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\n");
    printf("Sorted array:\n");
    
    for(i=s;i<e;i++)
    {
        printf("%d\n",a[i]);
    }
    
    printf("\n");
    
    do
    {
        flag=0;
        printf("Enter an element to find:");
        scanf("%d",&find);
        
        for(i=s;i<e;i++)
        {
            if(a[i]==find)
            {
                flag=1;
                break;
            }
        }
        
        if(flag)
        {
            printf("%d is present in the sorted array",find);
        }
        else
        {
            printf("%d is not present in the sorted array",find);
        }
    
        printf("\nDo you want to search again?:");
        scanf("%d",&again);
        scanf("%c",&ch);
    }
    while(ch=='y' || ch=='Y');

    return 0;
}