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
        
    temp = a[0];
    for(i=0;i<n-1;i++)
    {
        a[i] = a[i+1];
    }
    a[n-1] = temp;
    printf("After left rotation: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}