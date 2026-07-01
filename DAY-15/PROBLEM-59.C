#include<stdio.h>

int main()
{
    int n,i,temp;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements: ");
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("Enter the element at index %d : ",i);
        scanf("%d",&a[i]);
    }
    temp = a[n-1];
    for(i=n-1;i>0;i--)
    {
        a[i] = a[i-1];
    }
    a[0] = temp;
    printf("After right rotation: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}