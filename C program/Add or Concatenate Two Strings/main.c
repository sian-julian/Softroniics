
#include <stdio.h>
#include <string.h>

int main()
{
    char a[100],b[100];
    char *res;
    printf("Enter the first string:");
    fgets(a,100,stdin);
    
    int temp=strlen(a);
    printf("length:%d\n",temp);
    if(a[temp-1]=='\n')
    {                                   //to remove the newline charcter
        a[temp-1]='\0';
        temp--;
    }

    printf("Enter the second string:");
    fgets(b,100,stdin);
    res=strcat(a,b);
    printf("Concatinated String:%s",res);

    return 0;
}