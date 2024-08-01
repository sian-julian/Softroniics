#include <stdio.h>
#include <string.h>
int reverse(char *str,int i,int j)
{
    char temp;
    
    if(i<j)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
        return reverse(str,i,j);
    }
}
int main()
{
    int i,j,len;
    char str[500];
    
    printf("Enter a String:");
    scanf("%s",str);
    len=strlen(str);
    printf("Length:%d\n",len);
    j=len-1;
    i=0;
    reverse(str,i,j);
    printf("Reversed String:%s",str);
    return 0;
}