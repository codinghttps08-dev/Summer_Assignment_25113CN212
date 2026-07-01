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
    int min;
    for(i=0;i<n;i++)
    {
        min = i;
        for(j=i+1;j<n;j++)
        {
            if (a[min] > a[j])
            {
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    // printf("%d",min);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}