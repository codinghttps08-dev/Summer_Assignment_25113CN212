#include<stdio.h>
int main()
{
    int i,j,n,m;
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
    int c[n+m];
    for (i=0;i<n+m;i++)
    {
        if(i<n)
        {
            c[i] = a[i];
        }
        else
        {
            c[i] = b[i-n];
        }
    }
    for (i=0;i<n+m;i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}