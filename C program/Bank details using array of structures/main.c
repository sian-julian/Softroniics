#include <stdio.h>
#include <stdlib.h>

struct bank
{
    char name[100];
    int age;
    char place[100];
    long int phone;
    float inamt;
};

int totalAccounts = 0;  

void create(struct bank job[], int *totalAccounts)
{
    int i, j, n;
    printf("Enter the number of accounts you want to create: ");
    scanf("%d", &n);

    for(i = *totalAccounts; i < *totalAccounts + n; i++)
    {
        printf("Bank user %d\n", i + 1);
        printf("Enter Name: ");
        scanf("%s", job[i].name);
        printf("Enter Age: ");
        scanf("%d", &job[i].age);
        printf("Enter your Place: ");
        scanf("%s", job[i].place);
        
        int unique;
        do {
            unique = 1;  
            printf("Enter phone no: ");
            scanf("%ld", &job[i].phone);

            
            for(j = 0; j < i; j++)
            {
                if(job[i].phone == job[j].phone)
                {
                    unique = 0; 
                    printf("Phone number already exists. Please enter a unique number.\n");
                    break;
                }
            }
        } while (!unique);  

        printf("Enter Initial Amount (minimum balance is 2000): ");
        scanf("%f", &job[i].inamt);
        while(job[i].inamt < 2000)
        {
            printf("Amount is less than minimum balance. Enter new initial amount: ");
            scanf("%f", &job[i].inamt);
        }
        printf("\n");
    }

    *totalAccounts=*totalAccounts + n;  
}

int display(struct bank job[], int n)
{
    int i;
    long int p;
    printf("Enter phone no: ");
    scanf("%ld", &p);
    for(i = 0; i < n; i++)
    {
        if(job[i].phone == p)
        {
            printf("Bank user %d\n", i + 1);
            printf("Name: %s\n", job[i].name);
            printf("Age: %d\n", job[i].age);
            printf("Place: %s\n", job[i].place);
            printf("Phone: %ld\n", job[i].phone);
            printf("Initial Amount: %.2f\n", job[i].inamt);
            return 1;
        }
    }
    printf("\nThe account does not exist\n");
    return 0;
}

int deposit(struct bank job[], int n)
{
    int i;
    long int p;
    float damt;
    printf("Enter phone no: ");
    scanf("%ld", &p);
    for(i = 0; i < n; i++)
    {
        if(job[i].phone == p)
        {
            printf("Enter the amount you want to deposit: ");
            scanf("%f", &damt);
            job[i].inamt=job[i].inamt+damt;
            printf("Current bank balance after deposit: %.2f\n\n", job[i].inamt);
            return 1;
        }
    }
    printf("\nThe account does not exist\n");
    return 0;
}

int withdraw(struct bank job[], int n)
{
    int i;
    long int p;
    float wamt;
    printf("Enter phone no: ");
    scanf("%ld", &p);
    for(i = 0; i < n; i++)
    {
        if(job[i].phone == p)
        {
            printf("Enter the amount you want to withdraw: ");
            scanf("%f", &wamt);
            if(wamt < 0)
            {
                printf("Invalid amount... try again\n");
                return withdraw(job, n);
            }
            else if(wamt > job[i].inamt)
            {
                printf("Insufficient balance....try again\n");
                return withdraw(job,n);
            }
            else if(job[i].inamt < 2000)
            {
                printf("Insufficient balance\n");
            }
            else
            {
                job[i].inamt=job[i].inamt-wamt;
                printf("Current bank balance after withdrawal: %.2f\n\n", job[i].inamt);
            }
            return 1;
        }
    }
    printf("\nThe account does not exist\n");
    return 0;
}

int main()
{
    struct bank job[100];
    int ch;
    char again;
    
    do
    {
        printf("1. CREATE\n2. DISPLAY\n3. DEPOSIT\n4. WITHDRAW\n5. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        printf("\n");
        
        switch(ch)
        {
            case 1:
                create(job, &totalAccounts);
                break;
            case 2:
                display(job, totalAccounts);
                break;
            case 3:
                deposit(job, totalAccounts);
                break;
            case 4:
                withdraw(job, totalAccounts);
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice\n");
        }

        printf("Would you like to perform another operation? (Y/N): ");
        scanf(" %c", &again);
    }
    while(again == 'Y' || again == 'y');
    
    return 0;
}
