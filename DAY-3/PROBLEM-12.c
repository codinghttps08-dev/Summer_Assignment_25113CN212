#include <stdio.h>

int main() {
    int a, b, i, gcd;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int x = a, y = b;

    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }

    gcd = x;
    int lcm = (a * b) / gcd;

    printf("LCM = %d\n", lcm);

    return 0;
}