#include<stdio.h>
int main()
{
    int i,j,m,n,x,y;
    printf("Enter rows of matrix A : ");
    scanf("%d",&m);
    printf("Enter column of matrix A : ");
    scanf("%d",&n);
    printf("Enter rows of matrix B : ");
    scanf("%d",&x);
    printf("Enter column of matrix B : ");
    scanf("%d",&y);
    printf("\n");
    int a[m][n];
    int b[x][y];
    int c[m][n];
    printf("Enter elements of matrix a >>>>>");
    printf("\n");
    printf("\n");

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter element at index %d%d : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Enter elements of matrix b >>>>>");
    printf("\n");
    printf("\n");

    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("Enter element at index %d%d : ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n");

    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    if (m!=x)
    {
        printf("Cannot add matrices A and B !!!");
    }
    else
    {
        if(n!=y)
        {
            printf("Cannot add matrices A and B !!!");
        }
        else
        {
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    c[i][j] = a[i][j] - b[i][j];
                }
            }

            printf("Sum of matrices >>>>>");
            printf("\n");
            printf("\n");

            for(i=0;i<m;i++)
            {
                for(j=0;j<y;j++)
                {
                    printf("%d ",c[i][j]);
                }
                printf("\n");
            }
        }
    }

    return 0;
}