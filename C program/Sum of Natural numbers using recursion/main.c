
#include <stdio.h>
int natural(int);

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    
    printf("Sum of first %d numbers is:%d",n,natural(n));

    return 0;
}

int natural(int n)
{
    
    if(n==0)
    {
        return 0;
    }
    else
    {
        return n + natural(n - 1);
    }
}