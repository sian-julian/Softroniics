
#include <stdio.h>
int main()
{
    int num,p1,p2,i,temp,flag=0;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num>=0 && num<6)
    {
        printf("%d can't be expressed as product of 2 consecutive numbers",num);
    }
    else
    {
        for(i=1;i<num;i++)
        {
            p1=i;
            p2=i+1;
            temp=p1*p2;
            if(temp==num)
            {
                flag=1;
                break;
            }
        }
        if(flag)
        {
            printf("%d is a pronic number",num);
        }
        else
        {
            printf("%d is not a pronic number",num);
        }
    }

    return 0;
}