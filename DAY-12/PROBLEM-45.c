#include<stdio.h>
int pal(int x)
{
    int rev = 0,a;
    // int temp = x;
    while(x!=0)
    {
        a = x%10;
        rev = rev*10 + a;
        x = x/10;
    }
    return rev;
}
int main()
{
    int n,c;
    printf("Enter a number : ");
    scanf("%d",&n);
    c = pal(n);
    if (c==n)
    {
        printf("Pallindrome");
    }
    if (c!=n)
    {
        printf("Not Pallindrome");
    }

}