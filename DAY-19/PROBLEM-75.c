#include<stdio.h>
int main()
{
    int i,j,m,n;
    printf("Enter rows of matrix A : ");
    scanf("%d",&m);
    printf("Enter column of matrix A : ");
    scanf("%d",&n);
    
    printf("\n");
    int a[m][n];
    int b[m][n];
    
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

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            b[j][i] = a[i][j];
        }
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    return 0;
}