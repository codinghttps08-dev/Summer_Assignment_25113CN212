#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i == 0)
        {
            k = 0;
            for(j=1;j<=i;j++)
            {
                if(i%j == 0)
                {
                    k++;
                }
            }
            if (k==2)
            {
                printf("%d\n",i);
            }
        }
    }
    return 0;
}