
#include <stdio.h>
#include <math.h>

int main()
{
    int n,sum=0,d,temp;
    printf("Enter a number:");
    scanf("%d",&n);
    temp=n;
    
        while(temp>0)
        {
            d=temp%10;
            sum=sum + pow(d,3);
            temp=temp/10;
        }
        if(sum==n)
        {
            printf("%d is an Armstrong number",n); 
        }
        else
        {
            printf("%d is not an Armstrong number",n);
        }
    
    return 0;
}
