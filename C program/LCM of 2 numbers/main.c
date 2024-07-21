
#include <stdio.h>

int main()
{
    int a,b,num1,num2,temp,hcf,lcm;
    printf("Enter 2 numbers:");
    scanf("%d%d",&a,&b);
    
    num1=a;
    num2=b;
    
    while(num2!=0)
    {
        temp=num1%num2;
        num1=num2;
        num2=temp;
    }
    
    hcf=num1;
    lcm=(a*b)/hcf;
    
    printf("LCM of %d and %d: %d",a,b,lcm);
    
    return 0;
}