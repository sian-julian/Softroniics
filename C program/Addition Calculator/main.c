
#include <stdio.h>

int main()
{
    int n=0,sum=0;
    
    while(n!=-1)
    {
        sum=sum+n;
        printf("Enter a number:");
        scanf("%d",&n);
    }
    printf("Final sum:%d",sum);
    return 0;
}