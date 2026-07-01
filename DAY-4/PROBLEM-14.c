#include<stdio.h>
int main()
{
    int n,a=0,b=1,i,next;
    printf("Enter a number : ");
    scanf("%d",&n);
    
    for(i=0;i<=n-1;i++)
    {
        next  = a + b;
        a = b;
        b = next;
    }
    printf("The nth term of the fibonacci series is : %d",next);
    return 0;
}