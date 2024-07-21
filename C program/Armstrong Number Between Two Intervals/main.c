
#include <stdio.h>
#include <math.h>

int main()
{
    int i,sum,d,temp,m,n;
    printf("Enter the first interval:");
    scanf("%d",&m);
    printf("Enter the second interval:");
    scanf("%d",&n);
    
    for(i=m;i<=n;i++)
    {
        sum=0;
        temp=i;
        while(temp>0)
        {
            d=temp%10;
            sum=sum + pow(d,3);
            temp=temp/10;
        }
        if(sum==i)
        {
            printf("%d\n",i);
        }
    }

    return 0;
}