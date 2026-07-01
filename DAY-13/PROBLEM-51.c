#include<stdio.h>
int main()
{
    int i,n;
    int max,temp,min;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    printf("\n");
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the element at index %d : ",i);
        scanf("%d",&a[i]);
    }

    max = a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            temp = max;
            max = a[i];
            a[i] = temp;
        }
    }
    printf("Maximum : %d",max);
    printf("\n");

    min = a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<min)
        {
            temp = min;
            min = a[i];
            a[i] = temp;
        }
    }
    printf("Minimum : %d",min);

    return 0;
}