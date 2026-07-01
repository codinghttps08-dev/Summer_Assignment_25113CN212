#include<stdio.h>
int main()
{
    int i,j,n,x;
    int count;
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

    printf("<<<< Duplicates >>>>");
    printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if (a[i]==a[j])
            {
                printf("%d at %d",a[i],j-1);
                printf("\n");
            }
        }
        
    }
    
    return 0;

}