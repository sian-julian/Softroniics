
#include <stdio.h>

int main()
{
    int n,i,temp=1;
    printf("Enter a number:");
    scanf("%d",&n);
    
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            temp=0;
            printf("%d is a prime number",n);
        }
    }

    return 0;
}
