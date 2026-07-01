#include<stdio.h>
int main()
{
    int n,temp,rev=0;
    int i = 0;
    
    printf("Enter a number : ");
    scanf("%d",&n);
    temp = n;
    while(temp!=0)
    {
        i = (i)*10 + temp%2;
        temp = temp/2;
    }
    while (i != 0)
    {
        rev = rev * 10 + i % 10;
        i = i / 10;
    }
    printf("The binary of %d is : %d",n,rev);
    return 0;
}