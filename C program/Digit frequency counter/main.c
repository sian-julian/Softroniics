#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char str[1000];
    int digitcount[10]={0};
    int i,len;
    printf("Enter a String:");
    scanf("%s", str);
    len=strlen(str);
    
    for(i=0;i<len;i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            digitcount[str[i]-'0']++;
        }
    }  
    
    for(i=0;i<10;i++)
    {
        printf("%d ",digitcount[i]);
    }
    return 0;
}
