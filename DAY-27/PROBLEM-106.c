#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee e[100];
    int n = 0, choice, i, searchId, found;

    while(1)
    {
        printf("\n===== EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter Employee ID: ");
                scanf("%d", &e[n].id);

                printf("Enter Employee Name: ");
                scanf(" %[^\n]", e[n].name);

                printf("Enter Salary: ");
                scanf("%f", &e[n].salary);

                n++;
                printf("Employee added successfully!\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("No employee records found!\n");
                }
                else
                {
                    printf("\n--- Employee Records ---\n");

                    for(i = 0; i < n; i++)
                    {
                        printf("\nEmployee %d\n", i + 1);
                        printf("ID: %d\n", e[i].id);
                        printf("Name: %s\n", e[i].name);
                        printf("Salary: %.2f\n", e[i].salary);
                    }
                }
                break;

            case 3:
                found = 0;

                printf("Enter Employee ID to search: ");
                scanf("%d", &searchId);

                for(i = 0; i < n; i++)
                {
                    if(e[i].id == searchId)
                    {
                        printf("\nEmployee Found\n");
                        printf("ID: %d\n", e[i].id);
                        printf("Name: %s\n", e[i].name);
                        printf("Salary: %.2f\n", e[i].salary);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Employee not found!\n");
                }

                break;

            case 4:
                printf("Exiting Program...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}