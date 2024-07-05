
#include <stdio.h>

int main()
{
    int n,s;
    printf("Enter a Natural number:");
    scanf("%d",&n);
    
    if(n<0)
    {
        printf("%d is not a Natural number",n);
    }
    else
    {
         s=n*(n+1)/2;
         printf("SUM of first %d Natural numbers:%d",n,s);
    }
    return 0;
}
