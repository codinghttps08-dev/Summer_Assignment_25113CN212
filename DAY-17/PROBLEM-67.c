#include<stdio.h>
int main()
{
    int i,j,n,m,x,temp;
    printf("Enter the size of first array : ");
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
    {
        printf("Enter the element at index %d : ",i);
        scanf("%d",&a[i]);
    }
    printf("\n");
    printf("Enter the size of second array : ");
    scanf("%d",&m);
    int b[m];
    for (i=0;i<m;i++)
    {
        printf("Enter the element at index %d : ",i);
        scanf("%d",&b[i]);
    }
    printf("\n");
    x = n+m;
    int c[x];
    for (i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                printf("%d ",a[i]);
            }
        }
    }
    return 0;
}