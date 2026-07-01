#include<stdio.h>
int fac(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n*fac(n-1);
    }
}
int main()
{
    int n,temp,rem;
    int sum = 0;
    printf("Enter a number : ");
    scanf("%d",&n);
    temp = n;
    while( temp != 0)
    {
        rem = temp % 10;
        sum += fac(rem);
        temp /= 10;
    }
    if(n == sum)
    {
        printf("%d is a strong number.",n);
    }
    else{
        printf("%d is not a strong number.",n);
    }
    return 0;
}