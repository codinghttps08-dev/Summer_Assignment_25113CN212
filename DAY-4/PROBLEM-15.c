#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,y,l=0,a,i,rem;
    printf("Enter a number : ");
    scanf("%d",&n);
    x=n;
    y=n;
    // while(x!=0)
    // {
    //     l++;
    //     x = x/10;
    // }
    a=0;
    while(y!=0)
    {
        rem = y % 10;
        a += rem*rem*rem;
        y /= 10;
    }
    printf("%d\n",a);
    if(a==n)
    {
        printf("Entered number is a Armstrong number.");
    }
    else
    {
        printf("Entered number is not a Armstrong number.");
    }
    return 0;
    
}