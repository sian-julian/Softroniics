
#include <stdio.h>

int main()
{
    int a[10]={2,3,4,5,6,7,8,9,10,11};
    int i,even=0,odd=0;
    
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
            even=even+a[i];
        }
        else
        {
            odd=odd+a[i];
        }
    }
    
    printf("Sum of even numbers:%d\n",even);
    printf("Sum of odd numbers:%d",odd);
    
    return 0;
}
