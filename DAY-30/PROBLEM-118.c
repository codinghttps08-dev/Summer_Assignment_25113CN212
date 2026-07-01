#include <stdio.h>
#include <string.h>

struct Book
{
    int id;
    char title[50];
    char author[50];
    int issued;   // 0 = Available, 1 = Issued
};

int main()
{
    struct Book b[100];
    int n = 0;
    int choice, searchId, i, found;

    while (1)
    {
        printf("\n===== MINI LIBRARY SYSTEM =====\n");

        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:

                printf("Enter Book ID: ");
                scanf("%d", &b[n].id);

                getchar();

                printf("Enter Book Title: ");
                fgets(b[n].title, sizeof(b[n].title), stdin);
                b[n].title[strcspn(b[n].title, "\n")] = '\0';

                printf("Enter Author Name: ");
                fgets(b[n].author, sizeof(b[n].author), stdin);
                b[n].author[strcspn(b[n].author, "\n")] = '\0';

                b[n].issued = 0;

                n++;

                printf("Book Added Successfully!\n");
                break;

            case 2:

                if (n == 0)
                {
                    printf("No books available.\n");
                }
                else
                {
                    for (i = 0; i < n; i++)
                    {
                        printf("\nBook %d\n", i + 1);

                        printf("ID: %d\n", b[i].id);
                        printf("Title: %s\n", b[i].title);
                        printf("Author: %s\n", b[i].author);

                        if (b[i].issued)
                            printf("Status: Issued\n");
                        else
                            printf("Status: Available\n");
                    }
                }

                break;

            case 3:

                printf("Enter Book ID: ");
                scanf("%d", &searchId);

                found = 0;

                for (i = 0; i < n; i++)
                {
                    if (b[i].id == searchId)
                    {
                        printf("\nBook Found\n");

                        printf("ID: %d\n", b[i].id);
                        printf("Title: %s\n", b[i].title);
                        printf("Author: %s\n", b[i].author);

                        if (b[i].issued)
                            printf("Status: Issued\n");
                        else
                            printf("Status: Available\n");

                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Book not found.\n");

                break;

            case 4:

                printf("Enter Book ID to issue: ");
                scanf("%d", &searchId);

                found = 0;

                for (i = 0; i < n; i++)
                {
                    if (b[i].id == searchId)
                    {
                        found = 1;

                        if (b[i].issued)
                            printf("Book already issued.\n");
                        else
                        {
                            b[i].issued = 1;
                            printf("Book Issued Successfully.\n");
                        }

                        break;
                    }
                }

                if (!found)
                    printf("Book not found.\n");

                break;

            case 5:

                printf("Enter Book ID to return: ");
                scanf("%d", &searchId);

                found = 0;

                for (i = 0; i < n; i++)
                {
                    if (b[i].id == searchId)
                    {
                        found = 1;

                        if (!b[i].issued)
                            printf("Book already available.\n");
                        else
                        {
                            b[i].issued = 0;
                            printf("Book Returned Successfully.\n");
                        }

                        break;
                    }
                }

                if (!found)
                    printf("Book not found.\n");

                break;

            case 6:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}