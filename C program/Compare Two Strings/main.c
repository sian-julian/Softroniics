
#include <stdio.h>
#include <string.h>

int main()
{
    char a[100],b[100];
    printf("Enter the first string:");
    scanf("%s",a);
    printf("Enter the second string:");
    scanf("%s",b);
    
    if(strcmp(a,b)==0)
    {
        printf("Strings are equal");
    }
    else
    {
        printf("Strings are not equal");
    }

    return 0;
}
