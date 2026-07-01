#include<stdio.h>
int main()
{
    int n,first,last,i,rem,temp;
    printf("Enter first number : ");
    scanf("%d",&first);
    printf("Enter last number : ");
    scanf("%d",&last);
    
    for(i=first;i<=last;i++)
    {
        temp = i;
        n=0;
        while(temp!=0)
        {
            rem = temp%10;
            n += rem*rem*rem;
            temp /= 10;
        }
        if(i==n)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}