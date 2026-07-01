#include<stdio.h>
int main()
{
    int i,j,k,m,n,x,y;
    printf("Enter rows of matrix A : ");
    scanf("%d",&m);
    printf("Enter columns of matrix A : ");
    scanf("%d",&n);
    printf("Enter rows of matrix B : ");
    scanf("%d",&x);
    printf("Enter columns of matrix B : ");
    scanf("%d",&y);
    
    printf("\n");
    int a[m][n];
    int b[x][y];
    int c[m][y];
    
    printf("\n");
    if(n!=x)
    {
        printf("Cannot multiply matrices A and B !!!");
    }
    else
    {
        printf("Enter elements of matrix A >>>>>");
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


        printf("Enter elements of matrix B >>>>>");
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


        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                c[i][j] = 0;
                for(k=0;k<n;k++)
                {
                    c[i][j] += a[i][k]*b[k][j];
                }
            }           
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d ",c[i][j]);
            }
            printf("\n");         
        }
    }
    printf("\n");

    
    return 0;

}