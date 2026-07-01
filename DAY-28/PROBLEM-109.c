#include <stdio.h>

struct Library
{
    int id;
    char title[50];
    char author[50];
};

int main()
{
    struct Library book[100];
    int n = 0, choice, searchId, i;

    while (1)
    {
        printf("\n===== LIBRARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("\nEnter Book ID: ");
                scanf("%d", &book[n].id);

                printf("Enter Book Title: ");
                scanf(" %[^\n]", book[n].title);

                printf("Enter Author Name: ");
                scanf(" %[^\n]", book[n].author);

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
                    printf("\n----- Book List -----\n");

                    for (i = 0; i < n; i++)
                    {
                        printf("\nBook %d\n", i + 1);
                        printf("ID: %d\n", book[i].id);
                        printf("Title: %s\n", book[i].title);
                        printf("Author: %s\n", book[i].author);
                    }
                }
                break;

            case 3:
                printf("Enter Book ID to search: ");
                scanf("%d", &searchId);

                for (i = 0; i < n; i++)
                {
                    if (book[i].id == searchId)
                    {
                        printf("\nBook Found!\n");
                        printf("ID: %d\n", book[i].id);
                        printf("Title: %s\n", book[i].title);
                        printf("Author: %s\n", book[i].author);
                        break;
                    }
                }

                if (i == n)
                {
                    printf("Book not found.\n");
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