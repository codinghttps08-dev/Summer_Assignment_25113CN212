#include<stdio.h>
int main()
{
    int i,j,n,max,ans,temp,tem;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the element at index %d : ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
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
    for(i=0;i<n;i++)
    {
        
        printf("%d ",a[i]);
    }
    i = 0;
    max = 0;
    printf("\n");

    while(i<n)
    {
        j=i;
        while(j<n-1 && a[j]==a[j+1])
        {
            j++;
        }
        tem = j-i+1;
        if(tem>max)
        {
            max=tem;
            ans=a[i];
        }
        i=j+1;
    }

    printf("\n%d : %d",ans,max);

    return 0;
}