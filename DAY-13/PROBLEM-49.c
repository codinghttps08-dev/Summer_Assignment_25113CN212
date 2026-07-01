#include<stdio.h>
int main()
{
    int i,n;
    
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    printf("\n");
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the element at index %d : ",i);
        scanf("%d",&a[i]);
        
    }
    printf("The Array elements are : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}