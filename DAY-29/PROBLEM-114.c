#include <stdio.h>

int main() {
    int arr[100], n = 0, choice, i, key;
    int max, min, found;

    do {
        printf("\n===== Array Operations Menu =====\n");
        printf("1. Insert Elements\n");
        printf("2. Display Array\n");
        printf("3. Search Element\n");
        printf("4. Find Maximum\n");
        printf("5. Find Minimum\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter number of elements: ");
                scanf("%d", &n);

                printf("Enter %d elements:\n", n);
                for(i = 0; i < n; i++) {
                    scanf("%d", &arr[i]);
                }
                break;

            case 2:
                if(n == 0) {
                    printf("Array is empty.\n");
                } else {
                    printf("Array elements: ");
                    for(i = 0; i < n; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;

            case 3:
                if(n == 0) {
                    printf("Array is empty.\n");
                } else {
                    printf("Enter element to search: ");
                    scanf("%d", &key);

                    found = 0;

                    for(i = 0; i < n; i++) {
                        if(arr[i] == key) {
                            printf("Element found at index %d\n", i);
                            found = 1;
                            break;
                        }
                    }

                    if(found == 0)
                        printf("Element not found.\n");
                }
                break;

            case 4:
                if(n == 0) {
                    printf("Array is empty.\n");
                } else {
                    max = arr[0];

                    for(i = 1; i < n; i++) {
                        if(arr[i] > max)
                            max = arr[i];
                    }

                    printf("Maximum element = %d\n", max);
                }
                break;

            case 5:
                if(n == 0) {
                    printf("Array is empty.\n");
                } else {
                    min = arr[0];

                    for(i = 1; i < n; i++) {
                        if(arr[i] < min)
                            min = arr[i];
                    }

                    printf("Minimum element = %d\n", min);
                }
                break;

            case 6:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while(choice != 6);

    return 0;
}