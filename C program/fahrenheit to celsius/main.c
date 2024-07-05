
#include <stdio.h>

int main()
{
    float f,c;
    printf("enter degree in fahrenheit:");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("degree in celsius:%fC",c);

    return 0;
}
