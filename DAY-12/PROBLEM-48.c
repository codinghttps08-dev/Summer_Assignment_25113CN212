#include<stdio.h>
#include<math.h>
int perfect(int x)
{
    int i,sum=0;
    for(i=1;i<x;i++)
    {
        if (x%i == 0)
        {
            sum = sum + i;
        }
    }
    return sum; 
}
int main()
{
    int n,c;
    printf("Enter a number : ");
    scanf("%d",&n);
    c=perfect(n);
    if (c==n)
    {
        printf("Perfect Number");
    }
    if (c!=n)
    {
        printf("Not Perfect Number");
    }
    return 0;

}