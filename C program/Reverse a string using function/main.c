
#include <stdio.h>
#include <string.h>
int reverse(char *str)
{
    int len,i,j;
    char temp;
    
    len=strlen(str);
    printf("Length:%d\n",len);
    
    for(i=0,j=len-1;i<j;i++,j--)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    printf("Reversed String: %s",str);
}

int main()
{
    char str[500];
    
    printf("Enter a String:");
    scanf("%s",str);
    reverse(str);
    
    return 0;
}
