
#include <stdio.h>

int main()
{
    int a,b,mul;
    printf("Enter 2 numbers:");
    scanf("%d%d",&a,&b);
    
    if(a>0 && b>0)
    {
        if(a%2==0 && b%2==0)
        {
            mul=a*b
            printf("Product:%d",a*b);
        }
        else
        {
            printf("Sum:%d",a+b);
        }
    }
    printf("\n");
    if(mul%2==0)
    {
        printf("EVEN");
    }

    return 0;
}
