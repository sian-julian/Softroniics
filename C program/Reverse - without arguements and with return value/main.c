
#include <stdio.h>
int reverse();
int main()
{
    int temp;
    temp=reverse();
    printf("Reverse:%d",temp);
    return 0;
}

int reverse()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int d,r=0;
    
    while(n!=0)
    {
        d=n%10;
        r=r*10+d;
        n=n/10;
    }
    return r;
}