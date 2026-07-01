#include <stdio.h>
#include <string.h>

struct Employee
{
    int id;
    char name[50];
    char department[50];
    float salary;
};

int main()
{
    struct Employee emp[100];

    int n = 0;
    int choice, searchId, i, found;

    while (1)
    {
        printf("\n===== EMPLOYEE MANAGEMENT SYSTEM =====\n");

        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Salary\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:

                printf("Enter Employee ID: ");
                scanf("%d", &emp[n].id);

                getchar();

                printf("Enter Employee Name: ");
                fgets(emp[n].name, sizeof(emp[n].name), stdin);
                emp[n].name[strcspn(emp[n].name, "\n")] = '\0';

                printf("Enter Department: ");
                fgets(emp[n].department, sizeof(emp[n].department), stdin);
                emp[n].department[strcspn(emp[n].department, "\n")] = '\0';

                printf("Enter Salary: ");
                scanf("%f", &emp[n].salary);

                n++;

                printf("Employee Added Successfully.\n");
                break;

            case 2:

                if (n == 0)
                {
                    printf("No employee records.\n");
                }
                else
                {
                    for(i = 0; i < n; i++)
                    {
                        printf("\nEmployee %d\n", i + 1);

                        printf("ID: %d\n", emp[i].id);
                        printf("Name: %s\n", emp[i].name);
                        printf("Department: %s\n", emp[i].department);
                        printf("Salary: %.2f\n", emp[i].salary);
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

                        printf("ID: %d\n", emp[i].id);
                        printf("Name: %s\n", emp[i].name);
                        printf("Department: %s\n", emp[i].department);
                        printf("Salary: %.2f\n", emp[i].salary);

                        found = 1;
                        break;
                    }
                }

                if(!found)
                    printf("Employee not found.\n");

                break;

            case 4:

                printf("Enter Employee ID: ");
                scanf("%d", &searchId);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(emp[i].id == searchId)
                    {
                        printf("Enter New Salary: ");
                        scanf("%f", &emp[i].salary);

                        printf("Salary Updated.\n");

                        found = 1;
                        break;
                    }
                }

                if(!found)
                    printf("Employee not found.\n");

                break;

            case 5:

                printf("Enter Employee ID: ");
                scanf("%d", &searchId);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(emp[i].id == searchId)
                    {
                        for(int j = i; j < n - 1; j++)
                        {
                            emp[j] = emp[j + 1];
                        }

                        n--;

                        printf("Employee Deleted.\n");

                        found = 1;
                        break;
                    }
                }

                if(!found)
                    printf("Employee not found.\n");

                break;

            case 6:

                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid Choice.\n");
        }
    }

    return 0;
}