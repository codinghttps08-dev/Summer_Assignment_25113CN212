#include<stdio.h>
int main()
{
    int n,i,j,a;
    printf("Enter rows : ");
    scanf("%d",&n);
    for(int i =1; i<=n ;i++)
    {
        a=i;
        for(j =1 ;j<=n+1-i;j++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%c ",(char)(j+64));
        }
        for(j=2;j<=i;j++)
        {
            printf("%c ",(char)(a-1+64));
            a=a-1;
        }
        
        printf("\n");
    }
    return 0;
}