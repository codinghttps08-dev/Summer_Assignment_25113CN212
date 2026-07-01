#include<stdio.h>
int main()
{
    int i,j,n,x;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("<<<< Enter the array elements >>>>");
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("Enter the element at index %d : ",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the target element : ");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if (a[i]==x)
        {
            printf("%d is present at index %d",x,i);
            printf("\n");
        }
        if(a[i]!=x) 
        {
            j==0;
        }
        
    }
    if(j==0)
    {
        printf("%d is not present in the array",x);
    }
    return 0;

}