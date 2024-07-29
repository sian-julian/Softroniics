
#include <stdio.h>
int arshad(int n)
{
    int temp,d,sum=0;
    temp=n;
    while(temp>0)
    {
        d=temp%10;
        sum=sum+d;
        temp=temp/10;
    }
    return sum;
}

int main()
{
    int n,result;
    printf("Enter a number:");
    scanf("%d",&n);
    result=arshad(n);
    if(n%result==0)
    {
        printf("%d is a arshad number",n);
    }
    else
    {
        printf("%d is not a arshad number",n);   
    }
    return 0;
}
