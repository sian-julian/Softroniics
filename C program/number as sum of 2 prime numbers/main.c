#include <stdio.h>

int prime(int n)
{
    int i;
    // printf("n==%d\n",n);
    if(n==0 || n==1)
    {
        printf("Not prime\n");
    }
    else
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0){
                return 0;
                break;
            }

        }
        return 1;
    }
}

int main()
{
    int num,i,s1,s2,val1,val2;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num==0 || num==1 || num==2 || num==3)
    {
        printf("%d can't express as sum of two prime numbers",num);
    }
    else
    {
        for(i=2;i<=num/2;i++)
        {
                s1=i;
                s2=num-i;
                val1=prime(s1);
                val2=prime(s2);
                // printf("val1=%d, val2=%d\n",val1,val2);
                if(val1==1&&val2==1)
                {
                printf("%d can be express as sum of two prime numbers",num);
                break;
                }

        }
        if(val1!=1&&val2!=1)
        {
        printf("%d can't express as sum of two prime numbers",num);
        }
    }
    return 0;
}
