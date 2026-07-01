#include <stdio.h>
#include <string.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[100];
    int n = 0;
    int choice, i, roll, found;

    while (1)
    {
        printf("\n===== STUDENT RECORD SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter Roll Number: ");
                scanf("%d", &s[n].roll);

                getchar();

                printf("Enter Name: ");
                fgets(s[n].name, sizeof(s[n].name), stdin);

                s[n].name[strcspn(s[n].name, "\n")] = '\0';

                printf("Enter Marks: ");
                scanf("%f", &s[n].marks);

                n++;
                printf("Record Added Successfully!\n");
                break;

            case 2:
                if (n == 0)
                {
                    printf("No records available.\n");
                }
                else
                {
                    printf("\nStudent Records:\n");

                    for (i = 0; i < n; i++)
                    {
                        printf("\nStudent %d\n", i + 1);
                        printf("Roll No: %d\n", s[i].roll);
                        printf("Name: %s\n", s[i].name);
                        printf("Marks: %.2f\n", s[i].marks);
                    }
                }
                break;

            case 3:
                printf("Enter Roll Number to search: ");
                scanf("%d", &roll);

                found = 0;

                for (i = 0; i < n; i++)
                {
                    if (s[i].roll == roll)
                    {
                        printf("\nRecord Found\n");
                        printf("Roll No: %d\n", s[i].roll);
                        printf("Name: %s\n", s[i].name);
                        printf("Marks: %.2f\n", s[i].marks);

                        found = 1;
                        break;
                    }
                }

                if (found == 0)
                {
                    printf("Student not found.\n");
                }

                break;

            case 4:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}