#include<stdio.h>
int main()
{
    int i,n,j;
    int sum = 0;
    printf("Enter a number : ");
    scanf("%d",&n);
    j = n;
    for(i=1;i<n;i++)
    {
        
        if(j%i==0)
        {
            sum += i;
            continue;
        }
    }
    if(sum==n)
    {
        printf("%d is a perfect number.",n);
    }
    else{
        printf("%d is not a perfect numeber.");
    }
    return 0;

}