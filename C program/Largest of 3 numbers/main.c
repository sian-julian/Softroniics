
#include <stdio.h>

int main()
{
   int a,b,c;
   printf("enter 3 numbers:");
   scanf("%d%d%d",&a,&b,&c);
   
   if(a>b && a>c)
   {
       printf("%d is the largest",a);
   }
   if(b>a && b>c)
    {
        
            printf("%d is the largest",b);
    }
     if(c>a && c>b)
    {
            printf("%d is the largest",c);
    }
    if(a==b && a==c)
    {
        printf("all are equal");
    }

    return 0;
}