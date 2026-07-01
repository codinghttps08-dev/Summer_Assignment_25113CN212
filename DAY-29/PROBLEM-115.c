#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[100];
    int choice;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    do {
        printf("\n===== String Operations Menu =====\n");
        printf("1. Find Length\n");
        printf("2. Copy String\n");
        printf("3. Concatenate String\n");
        printf("4. Compare Strings\n");
        printf("5. Reverse String\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch(choice) {

            case 1:
                printf("Length = %lu\n", strlen(str1)-1);
                break;

            case 2:
                strcpy(temp, str1);
                printf("Copied String: %s", temp);
                break;

            case 3:
                printf("Enter second string: ");
                fgets(str2, sizeof(str2), stdin);

                strcpy(temp, str1);
                strcat(temp, str2);

                printf("Concatenated String: %s", temp);
                break;

            case 4:
                printf("Enter second string: ");
                fgets(str2, sizeof(str2), stdin);

                if(strcmp(str1, str2) == 0)
                    printf("Strings are Equal\n");
                else
                    printf("Strings are Not Equal\n");

                break;

            case 5:
                strcpy(temp, str1);

                int len = strlen(temp);

                if(temp[len - 1] == '\n')
                    temp[len - 1] = '\0';

                len = strlen(temp);

                for(int i = 0; i < len / 2; i++) {
                    char ch = temp[i];
                    temp[i] = temp[len - i - 1];
                    temp[len - i - 1] = ch;
                }

                printf("Reversed String: %s\n", temp);
                break;

            case 6:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while(choice != 6);

    return 0;
}