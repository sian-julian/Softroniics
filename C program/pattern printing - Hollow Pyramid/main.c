#include <stdio.h>

int main()
{
    int i,j,k,n=5,a=0;
    for(i=0;i<n;i++)
    {
        if(i<n-1)
        {
            for(j=1;j<n-i;j++)
            {
                printf("  ");
            }
            for(k=0;k<=i;k++)
            {
                if(k==0||k==i){
                    printf("*   ");
                }
                
                else{
                    printf("    ");
                }
    
            }
            printf("\n");
        }
        else{
            while(a<=n){
                printf(" * ");
                a++;
            }
        }
        
    }
    


    return 0;
}