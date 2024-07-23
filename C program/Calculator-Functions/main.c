
#include <stdio.h>
void calculator();

int main()
{
    calculator();
    
    return 0;
}

void calculator()
{
    float a,b;
    int ch,again;
    char c;
    
    do
    {
        printf("Enter 2 numbers:");
        scanf("%f %f",&a,&b);
        printf("\n1.Addition\n2.Differnce\n3.Multiplication\n4.Division\n");
        printf("\nEnter your choice:");
        scanf("%d",&ch);
        
        switch(ch)
        {
            case 1:
                printf("Sum:%.1f",a+b);
                break;
            case 2:
                printf("Differnce:%.1f",a-b);
                break;
            case 3:
                printf("Product:%.1f",a*b);
                break;
            case 4:
                if(b!=0)
                {
                    printf("Division:%.2f",a/b);
                }
                else
                {
                    printf("division not possible\n");
                }
                break;
            default:
                printf("INVALID CHOICE");
        }
        printf("\nDo yo want to continue?:");
        scanf("%d",&again);
        scanf("%c",&c);
    }
    while(c=='Y' || c=='y');
    

}