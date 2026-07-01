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
    
    for (i=0;i<x-1;i++)
    {
        for (j=i+1;j<x;j++)
        {
            if (c[i]==c[j])
            {
                temp = a[j];
                a[j] = a[x-1];
                a[x-1] = temp;
                x--;
            }
        }
    }
    for (i=0;i<x;i++)
    {
        printf("%d ",c[i]);
    }

    return 0;
}