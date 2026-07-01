#include<stdio.h>
int main()
{
    int n,sum=0,r=0;
    r = n + r;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(n > 0)
    {
        sum = sum + n%10;
        n=n/10;
    }
    
    printf("The sum of digits of %d is : %d",r,sum);
    return 0;
}