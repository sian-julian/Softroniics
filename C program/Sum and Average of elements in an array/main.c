
#include <stdio.h>

int main()
{
    int a[10]={5,4,6,7,3,9,1,2,10,11};
    int sum=0,i;
    float avg;
    
    for(i=0;i<10;i++)
    {
        sum=sum+a[i];
    }
    printf("Sum of elements:%d\n",sum);
    
    avg=sum/10;
    
    printf("Average of all elements:%.1f",avg);

    return 0;
}