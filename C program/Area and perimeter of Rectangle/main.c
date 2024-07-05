
#include <stdio.h>

int main()
{
    int l,b,area,perimeter;
    printf("Enter the length and height of the Rectangle:");
    scanf("%d%d",&l,&b);
    
    area=l*b;
    printf("Area of the Rectangle:%d\n",area);
    
    perimeter=2*(l+b);
    printf("perimeter of the Rectangle:%d",perimeter);

    return 0;
}