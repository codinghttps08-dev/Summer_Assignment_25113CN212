#include<stdio.h>
int main()
{
    int i,j,n,x,max,temp,secmax;
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

    max = a[0];
    for(i=1;i<n;i++)
    {
        if (a[i]>max)
        {
            temp = max;
            max = a[i];
            a[i] = temp;
        }
    }

    for(i=1;i<n;i++)
    {
        if (a[i-1]>a[i])
        {
            temp = a[i-1];
            a[i-1] = a[i];
            a[i] = temp;
        }
    }

    secmax = a[0];
    for(i=1;i<n;i++)
    {
        if (a[i]>secmax)
        {
            temp = secmax;
            secmax = a[i];
            a[i] = temp;
        }
    }
    printf("%d is the second largest element in the array",secmax);

    return 0;

}