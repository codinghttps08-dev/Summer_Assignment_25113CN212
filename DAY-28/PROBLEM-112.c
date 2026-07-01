#include <stdio.h>

struct Contact
{
    char name[50];
    char phone[15];
};

int main()
{
    struct Contact contact[100];
    int n = 0, choice, i, found;
    char search[50];

    while (1)
    {
        printf("\n===== CONTACT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("\nEnter Name: ");
                scanf(" %[^\n]", contact[n].name);

                printf("Enter Phone Number: ");
                scanf("%s", contact[n].phone);

                n++;

                printf("Contact Added Successfully!\n");
                break;

            case 2:
                if (n == 0)
                {
                    printf("No contacts available.\n");
                }
                else
                {
                    printf("\n----- Contact List -----\n");

                    for (i = 0; i < n; i++)
                    {
                        printf("\nContact %d\n", i + 1);
                        printf("Name : %s\n", contact[i].name);
                        printf("Phone: %s\n", contact[i].phone);
                    }
                }
                break;

            case 3:
                found = 0;

                printf("Enter Name to Search: ");
                scanf(" %[^\n]", search);

                for (i = 0; i < n; i++)
                {
                    int j = 0;

                    while (contact[i].name[j] == search[j] &&
                           contact[i].name[j] != '\0' &&
                           search[j] != '\0')
                    {
                        j++;
                    }

                    if (contact[i].name[j] == '\0' &&
                        search[j] == '\0')
                    {
                        printf("\nContact Found!\n");
                        printf("Name : %s\n", contact[i].name);
                        printf("Phone: %s\n", contact[i].phone);

                        found = 1;
                        break;
                    }
                }

                if (!found)
                {
                    printf("Contact not found.\n");
                }

                break;

            case 4:
                printf("Exiting Program...\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}