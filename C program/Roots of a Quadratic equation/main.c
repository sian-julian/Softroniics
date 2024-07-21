
#include <stdio.h>
#include <math.h>
int proot(int,int,int);
int nroot(int,int,int);
int main()
{
    int a,b,c;
    printf("Enter the first coefficient:");
    scanf("%d",&a);
    printf("Enter the second coefficient:");
    scanf("%d",&b);
        printf("Enter the third coefficient:");
    scanf("%d",&c);
    
    proot(a,b,c);
    nroot(a,b,c);
    return 0;
}

int proot(int a,int b,int c)
{
    float x,d;
    d=b*b - 4*a*c;
    
    if(d>0)
    {
    
        x=(-b + sqrt(d))/(2*a);
        
        printf("positive root of the equation:%.1f\n",x);
    }
    else
    {
        printf("the quadratic equation has no roots");
    }
}

int nroot(int a,int b,int c)
{
    float x,d;
    d=b*b - 4*a*c;
    
    if(d>0)
    {
    
        x=(-b - sqrt(d))/(2*a);
        
        printf("negative root of the equation:%.1f",x);
    }
    else
    {
        printf("the quadratic equation has no roots");
    }
}
