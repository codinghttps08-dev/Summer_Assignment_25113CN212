#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float basic, hra, da, net;
};

int main()
{
    struct Employee emp[100];
    int n = 0, choice, i, searchId, found;

    while(1)
    {
        printf("\n===== SALARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee Salary\n");
        printf("2. Display Records\n");
        printf("3. Search Employee\n");
        printf("4. Update Salary\n");
        printf("5. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter Employee ID: ");
                scanf("%d", &emp[n].id);

                printf("Enter Employee Name: ");
                scanf(" %[^\n]", emp[n].name);

                printf("Enter Basic Salary: ");
                scanf("%f", &emp[n].basic);

                printf("Enter HRA: ");
                scanf("%f", &emp[n].hra);

                printf("Enter DA: ");
                scanf("%f", &emp[n].da);

                emp[n].net =
                    emp[n].basic +
                    emp[n].hra +
                    emp[n].da;

                printf("Net Salary = %.2f\n", emp[n].net);

                n++;
                break;

            case 2:
                if(n == 0)
                {
                    printf("No records available!\n");
                }
                else
                {
                    printf("\n--- Salary Records ---\n");

                    for(i = 0; i < n; i++)
                    {
                        printf("\nID: %d\n", emp[i].id);
                        printf("Name: %s\n", emp[i].name);
                        printf("Basic: %.2f\n", emp[i].basic);
                        printf("HRA: %.2f\n", emp[i].hra);
                        printf("DA: %.2f\n", emp[i].da);
                        printf("Net Salary: %.2f\n", emp[i].net);
                    }
                }
                break;

            case 3:
                printf("Enter Employee ID: ");
                scanf("%d", &searchId);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(emp[i].id == searchId)
                    {
                        printf("\nEmployee Found\n");
                        printf("Name: %s\n", emp[i].name);
                        printf("Net Salary: %.2f\n",
                               emp[i].net);

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
                printf("Enter Employee ID: ");
                scanf("%d", &searchId);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(emp[i].id == searchId)
                    {
                        printf("Enter New Basic Salary: ");
                        scanf("%f", &emp[i].basic);

                        emp[i].net =
                            emp[i].basic +
                            emp[i].hra +
                            emp[i].da;

                        printf("Salary Updated!\n");
                        printf("New Net Salary = %.2f\n",
                                emp[i].net);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Employee not found!\n");
                }

                break;

            case 5:
                printf("Program Closed.\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}