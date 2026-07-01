#include<stdio.h>
int main()
{
    int n,rev=0,pal;
    printf("Enter a number : ");
    scanf("%d",&n);
    pal = n;

    while(n>0)
    {
        rev = (rev*10 + n%10);
        n=n/10;
    }
    
    if(rev==pal)
    {
        printf("Yes, The number is a palindrome.");
    }
    else
    {
        printf("No, The number is not a pallindrome.");
    }
   
    return 0;
}