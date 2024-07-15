
#include <stdio.h>

int main()
{
    int sum=0,n,d,r=0;
    
    printf("Enter a number:");
    scanf("%d",&n);
    
    while(n!=0)
    {
        d=n%10;
        sum=sum+d;
        r=r*10+d;
        n=n/10;
    }
    printf("Sum:%d\n",sum);
    printf("Reverse:%d",r);
    return 0;
}
