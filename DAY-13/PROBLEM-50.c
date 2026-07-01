#include<stdio.h>
int main()
{
    int i,n,avg;
    int sum = 0;
    
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    printf("\n");
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the element at index %d : ",i);
        scanf("%d",&a[i]);
        
    }
    // printf("The Array elements are : ");
    for(i=0;i<n;i++)
    {
        sum = sum + a[i];
    }
    printf("The sum of the array is : %d",sum);
    avg =sum/n;
    printf("\n");
    printf("The average of the array is : %d",avg);
    return 0;
}