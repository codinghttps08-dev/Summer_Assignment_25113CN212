#include <stdio.h>

int main()
{
    int seats = 10;   // Total available seats
    int choice, tickets;

    while (1)
    {
        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1. Book Ticket\n");
        printf("2. Cancel Ticket\n");
        printf("3. View Available Seats\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter number of tickets: ");
                scanf("%d", &tickets);

                if (tickets <= seats && tickets > 0)
                {
                    seats -= tickets;
                    printf("Booking Successful!\n");
                    printf("Remaining Seats: %d\n", seats);
                }
                else
                {
                    printf("Not enough seats available.\n");
                }
                break;

            case 2:
                printf("Enter number of tickets to cancel: ");
                scanf("%d", &tickets);

                if (tickets > 0)
                {
                    seats += tickets;

                    if (seats > 10)
                        seats = 10;

                    printf("Ticket Cancelled Successfully!\n");
                    printf("Available Seats: %d\n", seats);
                }
                else
                {
                    printf("Invalid Input!\n");
                }
                break;

            case 3:
                printf("Available Seats: %d\n", seats);
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