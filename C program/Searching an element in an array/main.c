
#include <stdio.h>

int main()
{
    int a[10]={45,34,23,12,89,78,67,87,90,11};
    int n,i,flag=0;
    printf("Enter a element:");
    scanf("%d",&n);
    
    for(i=0;i<10;i++)
    {
        if(a[i]==n)
        {
            flag=1;
            break;
        }
    }
    
    if(flag)
    {
        printf("%d is an element in the array",n);
    }
    else
    {
        printf("%d is not an element in the array",n);
    }
    

    return 0;
}