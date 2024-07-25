
#include <stdio.h>
int factorial(int);

int main()
{
    int num;
    printf("Enter a positive integer:");
    scanf("%d",&num);
    
    if(num<0)
    {
        printf("Factorial is defined for negative numbers.\n");
    }
    else
    {
        printf("Factorial of %d is:%d\n",num,factorial(num));
    }
    return 0;
}

int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}