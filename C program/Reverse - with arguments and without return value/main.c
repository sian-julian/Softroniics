
#include <stdio.h>
void reverse(int);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    reverse(n);
    return 0;
}

void reverse(int n)
{
    int d,r=0;
    
    while(n!=0)
    {
        d=n%10;
        r=r*10+d;
        n=n/10;
    }
    printf("Reverse:%d",r);
}