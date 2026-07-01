#include<stdio.h>
int main()
{
    int n,x,i,temp,temp2;
    printf("Enter a number : ");
    scanf("%d",&x);
    printf("Enter power : ");
    scanf("%d",&n);
    temp = x;
    temp2 = n;
    while(temp2-1 != 0)
    {
        temp = x*temp;
        temp2 = temp2-1;
    }
    printf("%d to the power %d is : %d",x,n,temp);
    return 0;
}