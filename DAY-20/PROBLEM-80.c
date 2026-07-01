#include<stdio.h>
int main()
{
    int i,j,m,n;
    printf("Enter rows of matrix A : ");
    scanf("%d",&m);
    printf("Enter columns of matrix A : ");
    scanf("%d",&n);
    
    printf("\n");
    int a[m][n];
    int b[m][n];
    int sum;
    
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

    for(j=0;j<n;j++)
    {
        sum =0;
        for(i=0;i<m;i++)
        {
            sum += a[i][j];
        }
        printf("%d ",sum);        
    }

    return 0;

}