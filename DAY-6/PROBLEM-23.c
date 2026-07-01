#include<stdio.h>
int main()
{
    int n,temp,r,rev=0;
    int i = 0;
    int count =0;
    
    printf("Enter a number : ");
    scanf("%d",&n);
    temp = n;
    while(temp!=0)
    {
        i = (i)*10 + temp%2;
        temp = temp/2;
    }
    while (i != 0)
    {
        rev = rev * 10 + i % 10;
        i = i / 10;
    }
    printf("%d\n",rev);
    while(rev != 0)
    {
        r = rev % 10;
        rev = rev / 10;
        if(r==1)
        {
            count++;
        }
    }
    printf("The set bit of %d is : %d",n,count);
    return 0;
}