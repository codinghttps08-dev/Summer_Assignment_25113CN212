#include<stdio.h>
int main()
{
    int i,n,sum;
    int j = 0;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the element at index %d : ",i);
        scanf("%d",&a[i]);
    }
    sum = (n+1)*(n+2)/2;
    for(i=0;i<n;i++)
    {
        j = j + a[i];
    }
    printf("The missing element is %d ",sum-j);
    return 0;

}