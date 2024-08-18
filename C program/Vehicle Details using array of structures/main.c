#include <stdio.h>
#include <stdlib.h>

struct vehicle
{
    char owner[100];
    char vname[100];
    char vmodel[100];
    int ntyre;
};

int totalvehicle=0;

void create(struct vehicle v[],int *totalvehicle)
{
    printf("Vehicle no %d\n",*totalvehicle+1);
    printf("Owner name:");
    scanf("%s",v[*totalvehicle].owner);
    printf("Vehicle name:");
    scanf("%s",v[*totalvehicle].vname);
    printf("Vehicle model:");
    scanf("%s",v[*totalvehicle].vmodel);
    
    while (1)
    {
        printf("Number of Tyres: ");
        scanf("%d", &v[*totalvehicle].ntyre);
        if (v[*totalvehicle].ntyre == 2 || v[*totalvehicle].ntyre == 3 || v[*totalvehicle].ntyre == 4) 
        {
            break;
        } 
        else 
        {
            printf("Sorry, we do not accept %d tyre vehicles... Please try again.\n", v[*totalvehicle].ntyre);
        }
    }
    printf("\n");
    (*totalvehicle)++;
}

void display(struct vehicle v[], int n) 
{
    int i;
    char ch, choice;
    
    do 
    {
        printf("\n");
        printf("a. 2 Tyres\nb. 3 Tyres\nc. 4 Tyres\nd. EXIT\n");
        printf("Enter the choice: ");
        scanf(" %c", &ch);

        int found = 0;
        for (i = 0; i < n; i++)
        {
            if ((ch == 'a' && v[i].ntyre == 2) ||(ch == 'b' && v[i].ntyre == 3) || (ch == 'c' && v[i].ntyre == 4)) 
            {
                printf("Vehicle no %d\n", i + 1);
                printf("Owner name: %s\n", v[i].owner);
                printf("Vehicle name: %s\n", v[i].vname);
                printf("Vehicle model: %s\n", v[i].vmodel);
                printf("Number of Tyres: %d\n\n", v[i].ntyre);
                found = 1;
            }
            else if (ch == 'd') 
            {
                printf("Returning to main menu...\n");
                return;
            }
            else
            {
                break;
            }
        }
        if (!found)
        {
            printf("No vehicles found\n");
        }


        
        printf("\nDo you want to display again (Y/N): ");
        scanf(" %c", &choice);
    } 
    while (choice == 'Y' || choice == 'y');
}

int main()
{
    struct vehicle v[100];
    int ch;
    char again;
    
    do
    {
        begin:
        printf("1.CREATE\n2.DISPLAY\n3.EXIT\n");
        printf("Enter your choice:");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                create(v,&totalvehicle);
                break;
            case 2:
                display(v,totalvehicle);
                goto begin;
                break;
            case 3:
                exit(0);
            default:
                printf("\ninvalid choice");
        }
        printf("\nDo you want to perform another operation(Y/N):");
        scanf(" %c",&again);
    }
    while(again=='Y' || again=='y'); 

    return 0;
}