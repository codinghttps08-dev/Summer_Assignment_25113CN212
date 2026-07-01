#include <stdio.h>

struct Bank
{
    int accNo;
    char name[50];
    float balance;
};

int main()
{
    struct Bank user;
    int choice;
    float amount;

    user.balance = 0;

    while (1)
    {
        printf("\n===== BANK ACCOUNT SYSTEM =====\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Check Balance\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter Account Number: ");
                scanf("%d", &user.accNo);

                printf("Enter Account Holder Name: ");
                scanf(" %[^\n]", user.name);

                printf("Enter Initial Balance: ");
                scanf("%f", &user.balance);

                printf("Account Created Successfully!\n");
                break;

            case 2:
                printf("Enter Amount to Deposit: ");
                scanf("%f", &amount);

                if (amount > 0)
                {
                    user.balance += amount;
                    printf("Deposit Successful!\n");
                }
                else
                {
                    printf("Invalid Amount!\n");
                }
                break;

            case 3:
                printf("Enter Amount to Withdraw: ");
                scanf("%f", &amount);

                if (amount <= user.balance)
                {
                    user.balance -= amount;
                    printf("Withdrawal Successful!\n");
                }
                else
                {
                    printf("Insufficient Balance!\n");
                }
                break;

            case 4:
                printf("\nAccount Number: %d\n", user.accNo);
                printf("Account Holder: %s\n", user.name);
                printf("Current Balance: %.2f\n", user.balance);
                break;

            case 5:
                printf("Thank You!\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}