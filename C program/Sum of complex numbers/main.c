
#include <stdio.h>

int main()
{
    int a,b,c,d,sumr=0,sumi=0;
    printf("Enter the real and imaginary part of first complex no:");
    scanf("%d %d",&a,&b);
    printf("Enter the real and imaginary part of second complex no:");
    scanf("%d %d",&c,&d);
    
    sumr=a+c;
    sumi=b+d;
    
    printf("Sum:%d + %di",sumr,sumi);

    return 0;
}