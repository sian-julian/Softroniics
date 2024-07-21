
#include <stdio.h>
int reverse(int);
int main()
{
    int n,temp;
    printf("Enter a number:");
    scanf("%d",&n);
    temp=reverse(n);
    printf("Reverse:%d",temp);
    return 0;
}

int reverse(int n)
{
    int d,r=0;
    
    while(n!=0)
    {
        d=n%10;
        r=r*10+d;
        n=n/10;
    }
    return r;
}