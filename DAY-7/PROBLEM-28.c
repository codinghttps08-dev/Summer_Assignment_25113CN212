#include<stdio.h>
int reverse = 0;
int rev(int n)
{
    if(n == 0)
        return reverse;

    reverse = reverse * 10 + n % 10;
    return rev(n / 10);
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("The reverse of %d is : %d",n,rev(n));
    return 0;
}