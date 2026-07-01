#include<stdio.h>
int main()
{
    int i,j,k,n,m;
    printf("Enter the size of first array : ");
    scanf("%d",&n);
    printf("\n");
    printf("\n");
    int a[n];
    printf("Enter elements of first array >>>>");
    printf("\n");
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("Enter element at index %d : ",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the size of second array : ");
    scanf("%d",&m);
    printf("\n");
    printf("\n");
    int b[m];
    printf("Enter elements of second array >>>>");
    printf("\n");
    printf("\n");
    for(i=0;i<m;i++)
    {
        printf("Enter element at index %d : ",i);
        scanf("%d",&b[i]);
    }
    int c[m+n];
    i=j=k=0;
    while(i<n && j<m)
    {
        if (a[i]<=b[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = b[j++];
        }
    }
    while(i<n)
    {
        c[k++] = a[i++];
    }
    while(j<m)
    {
        c[k++] = b[j++];
    }
    for(i=0;i<m+n;i++)
    {
        printf("%d ",c[i]);
    }
}