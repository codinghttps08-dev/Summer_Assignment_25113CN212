#include<stdio.h>
int main()
{
    int n,i,c;
    printf("Enter a number : ");
    scanf("%d",&n);

    if(n==2 || n==3)
    {
        printf("%d is a prime number.",n);
    }
    for(i=4;i<=n;i++)
    {
        if(n%i==0)
        {
            c=1;
        }
        else
        {
            c=0;
        }

    }
    if(c==0)
    {
        printf("%d is not a prime number.",n);
    }
    if(c==1)
    {
        printf("%d is a prime number.",n);
    }
    return 0;

}