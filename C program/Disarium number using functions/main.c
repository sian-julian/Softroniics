
#include <stdio.h>
#include <math.h>
int desar(int n)
{
    int temp,sum=0,e,i,d;
    temp=n;
    e=n;
    int count=0;
    while(temp!=0)
    {
        temp=temp/10;
        count++;
    }
    i=count;
    while(e>0 && i>0)
    {
        d=e%10;
        sum=sum+pow(d,i);
        e=e/10;
        i--;
    }
    return sum;
}

int main()
{
    int n,result;
    printf("Enter a number:");
    scanf("%d",&n);
    result=desar(n);
    if(result==n)
    {
        printf("%d is a desarium number",n);
    }
    else
    {
        printf("%d is not a desarium number",n);
    }
    return 0;
}