#include<stdio.h>
int main()
{
    int i,j,n,temp,x;
    printf("Enter the size of array : ");
    scanf("%d",&n);

    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element at index %d : ",i);
        scanf("%d",&a[i]);
    }
    printf("\n");
    printf("Enter the target : ");
    scanf("%d",&x);
    int low = 0;
    int high = n-1;
    int mid;
    while(high>=low)
    {
        mid = (low + high)/2;
        if (a[mid]== x)
        {
            printf("%d is found at index %d.",x,mid);
            return 0;
        }
        else if(a[mid]>x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    
    printf("Element not found !");
    return 0;

}