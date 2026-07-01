#include<stdio.h>
int main()
{
    int n,i,j,temp;
    printf("Enter rows : ");
    scanf("%d",&n);
    temp = n;
    for(i =1; i<=n ;i++)
    {
        for(int j =1 ;j<=i;j++)
        {
            printf("  ");
        }
        for(j=1;j<=(2*temp-1);j++)
        {
            printf("* ");
            
        }
        printf("\n");
        temp=temp-1;
    }
    return 0;
}