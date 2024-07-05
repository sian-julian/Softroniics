
#include <stdio.h>

int main()
{
    int i=1,number=0,count=0,start=0;
    printf("Enter a number:");
    scanf("%d",&number);
    printf("Enter the count:");
    scanf("%d",&count);
    printf("Enter the start:");
    scanf("%d",&start);
    
    
    for(i=start;i<=count;i++)
    {
        printf("%d\n",(number*i));
    }

    return 0;
}