#include<stdio.h>
int main()
{
    int i,n,x;
    int j=0;
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
            j++;
        }
        
        
    }
    if(j==0)
    {
        printf("%d is not present in the array",x);
    }
    if(j!=0)
    {
        printf("%d is present %d times in the array",x,j);
    }
    return 0;


}