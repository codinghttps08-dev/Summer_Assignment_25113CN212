#include<stdio.h>
int main()
{
    int n,a=0,b=1,i,next;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("%d\n",a);
    for(i=0;i<=n-1;i++)
    {
        next  = a + b;
        a = b;
        b = next;
        printf("%d\n",next);
    }
    return 0;
}