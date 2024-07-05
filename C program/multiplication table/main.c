
#include <stdio.h>

int main()
{
    int n,i=1,mul;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("MULTIPLICATION TABLE OF %d\n",n);
    
    while(i<=10)
    {
        mul=n*i;
        printf("%d*%d=%d\n",n,i,mul);
        i++;
    }

    return 0;
}
