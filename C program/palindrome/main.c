
#include <stdio.h>
#include <string.h>

int main()
{
    int len,i,j;
    char str[500],temp,og[500];
    
    printf("Enter a String:");
    scanf("%s",str);
    strcpy(og,str);
    len=strlen(str);
    printf("length:%d\n",len);
    
    for(i=0,j=len-1;i<j;i++,j--)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    printf("%s\n",str);
    
    if(strcmp(og,str)==0)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}
