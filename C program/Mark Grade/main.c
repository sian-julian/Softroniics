
#include <stdio.h>

int main()
{
    int mark;
    printf("Enter yor mark:");
    scanf("%d",&mark);
    
    if(mark>90 && mark<=100)
    {
        printf("A");
    }
    else if(mark>80 && mark<=90)
    {
        printf("B");
    }
    else if(mark>70 && mark<=80)
    {
        printf("C");
    }
    else if(mark>60 && mark<=70)
    {
        printf("D");
    }
    else if(mark>50 && mark<=60)
    {
        printf("E");
    }
    else if(mark>0 && mark<=50)
    {
        printf("FAIL");
    }
    else
    {
        printf("MARK INVALID");
    }
    return 0;
}
