#include<stdio.h>
int main()
{
    int i,j,n,temp;
    printf("Enter the size of the array : ");    
    scanf("%d",&n);
    int a[n];
    printf("<<<< Enter the array elements >>>>");
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("Enter the element at index %d : ",i);
        scanf("%d",&a[i]);
    }
    //print
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    //sorting
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    //print
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    // Reverse 
    for(i=0;i<n/2;i++)
    {
        temp = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = temp;
    }
    //print
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}