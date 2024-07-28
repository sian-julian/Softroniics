
#include <stdio.h>
int hcf(int a,int b)
{
    int num1,num2,temp;
    num1=a;
    num2=b;
    
    if(num2==0)
    {
        return num1;
    }
    else
    {
        temp=num1%num2;
        num1=num2;
        num2=temp;
        return hcf(num1,num2);
    }
}

int main()
{
    int a,b,result;
    
    printf("Enter 2 numbers:");
    scanf("%d %d",&a,&b);
    
    result=hcf(a,b);
    printf("hcf of %d and %d is:%d",a,b,result);
    return 0;
}
