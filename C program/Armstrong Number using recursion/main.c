
#include <stdio.h>
#include <math.h>
int count(int);
int armstrong(int,int,int);

int main()
{
    int n,temp2,sum=0,e,f;
    printf("Enter a number:");
    scanf("%d",&n);
    e=n;
    temp2=count(n);     
    f=armstrong(temp2,sum,e);
    
    if(f==n)
    {
        printf("%d is an armstrong number",n);
    }
    else
    {
        printf("%d is not an armstrong number",n);
    }
    
    return 0;
}

int count(int n)
{
    int temp,len=0;
    temp=n;
    
    while(temp!=0)
    {
        temp=temp/10;
        len=len+1;
    }
    return len;
}

int armstrong(int temp2,int sum,int e)
{
    int d;
    
    if(e>0)
    {
        d=e%10;
        e=e/10;
        sum=sum + pow(d,temp2);
        return armstrong(temp2,sum,e);
    }
    return sum;
    
}