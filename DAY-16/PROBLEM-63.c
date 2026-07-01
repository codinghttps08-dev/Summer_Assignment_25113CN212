#include<stdio.h>
int main()
{
    int i,n,sum,x;
    int j = 0;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the element at index %d : ",i);
        scanf("%d",&a[i]);
    }
    printf("\n");
    printf("Enter the target sum : ");
    scanf("%d",&x);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j] == x)
            {
                printf("(%d , %d)",a[i],a[j]);
                printf("\n");
            }
        }   
    }
    return 0;

}