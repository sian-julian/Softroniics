
#include <stdio.h>

int main()
{
    int fact=1,n,i;
    printf("Enter a number:");
    scanf("%d",&n);
    
    for(i=fact;i<=n;i++)
    {
        fact=fact*i;
    }
    
    printf("Factorial of %d is:%d",n,fact);
    
    return 0;
}
