#include<stdio.h>
int main()
{
    int i,j,n,temp,x,y;
    
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the element at index %d : ",i);
        scanf("%d",&a[i]);
    }
    x = n;
    y = 0;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                temp = a[j];
                a[j] = a[x-1];
                a[x-1] = temp;
                n--;
                x--;
            }
        }   
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;

}