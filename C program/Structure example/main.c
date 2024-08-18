
#include <stdio.h>
#include <string.h>

struct employee
{
    int id;
    char name[50];
    float salary;
}e1,e2;

int main()
{
    e1.id=101;
    strcpy(e1.name,"Sian Julian");
    e1.salary=56000;
    
    e2.id=102;
    strcpy(e2.name,"Avin Anil");
    e2.salary=55000;
    
    printf("Emloyee 1 id:%d\n",e1.id);
    printf("Emloyee 1 name:%s\n",e1.name);
    printf("Emloyee 1 salary:%.2f\n",e1.salary);
    
    printf("\n");
    
    printf("Emloyee 2 id:%d\n",e2.id);
    printf("Emloyee 2 name:%s\n",e2.name);
    printf("Emloyee 2 salary:%.2f\n",e2.salary);
    

    return 0;
}