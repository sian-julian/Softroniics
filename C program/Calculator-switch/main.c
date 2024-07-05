
#include <stdio.h>

int main()
{
    float a,b;
    char ch;
    printf("Enter your choice:");
    scanf("%c",&ch);
    printf("Enter 2 numbers:");
    scanf("%f%f",&a,&b);
    
    
    switch(ch)
    {
        case 'a':
            printf("SUM:%f",a+b);
            break;
        case 'b':
            printf("DIFFERENCE:%f",a-b);
            break;
        case 'c':
            printf("PRODUCT:%f",a*b);
            break;
        case 'd':
            printf("DIVIDE:%f",a/b);
            break;
        default:
            printf("INVALID CHOICE");
            
    }

    return 0;
}
