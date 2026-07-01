// SORT ARRAY IN DESCENDING ORDER.
#include<stdio.h>
int main()
{
    int i,j,n,temp;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element at index %d : ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if (a[j]<a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("%d ",a[0]);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}