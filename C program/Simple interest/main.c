
#include <stdio.h>

int main()
{
    int p,t;
    float r,a;
    printf("Enter your initial principal balance:");
    scanf("%d",&p);
    printf("Enter annual interest rate:");
    scanf("%f",&r);
    printf("Enter time in years:");
    scanf("%d",&t);
    
    a=p*(1+r*t);
    printf("Final amount:%f",a);

    return 0;
}
