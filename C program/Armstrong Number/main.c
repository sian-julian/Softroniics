
#include <stdio.h>
#include <math.h>

int main()
{
    int n,sum=0,d,temp,len=0,e;
    printf("Enter a number:");
    scanf("%d",&n);
    temp=n;
    e=n;
    while(temp!=0)
    {
        temp=temp/10;
        len=len + 1;
    }
    
    printf("length:%d\n",len);
    
        while(n>0)
        {
            d=n%10;
            sum=sum + pow(d,len);
            n=n/10;
        }
        printf("Sum:%d\n",sum);
        if(sum==e)
        {
            printf("%d is an Armstrong number",sum); 
        }
        else
        {
            printf("%d is not an Armstrong number",n);
        }
    
    return 0;
}
