
#include <stdio.h>
#include <math.h>

int main()
{
    int p,t,n;
    float r,a;
    printf("Enter your initial principal balance:");
    scanf("%d",&p);
    printf("Enter annual interest rate:");
    scanf("%f",&r);
    printf("number of times interest is compounded per year:");
    scanf("%d",&n);
    printf("Enter time in years:");
    scanf("%d",&t);
    
    a = p*pow(1+r/n,n*t);

    printf("compund interest:%f",a);
    
    return 0;
}
