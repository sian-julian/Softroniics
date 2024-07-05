
#include <stdio.h>

int main()
{
    int n,f1=0,f2=1,f3,i=1;
    printf("Enter a number:");
    scanf("%d",&n);
    f3=0;
    
    printf("FIBONACCI %d numbers are:\n",n);
    while(i<=n)
    {
        f1=f2;
        f2=f3;
        f3=f1+f2;
        printf("%d\n",f3);
        i++;
    }
    return 0;
}