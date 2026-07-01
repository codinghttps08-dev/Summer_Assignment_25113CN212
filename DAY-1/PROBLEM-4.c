#include<stdio.h>
int main()
{
    int n,r,i=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    r=n;
    while(n>0)
    {
        n=n/10;
        i=i+1;
    }
    n=r;
    printf("The number of digits in %d is : %d",n,i);
    return 0;
}