
#include <stdio.h>
#include <string.h>

int main()
{
    int len,i,j;
    char str[500],temp;
    
    printf("Enter a String:");
    scanf("%s",str);
    len=strlen(str);
    printf("length:%d\n",len);
    for(i=0,j=len-1;i<j;i++,j--)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    printf("%s",str);
    
    return 0;
}
