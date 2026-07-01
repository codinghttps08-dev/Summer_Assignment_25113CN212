#include<stdio.h>
int main()
{
    int i,n;
    int even = 0;
    int odd = 0;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    printf("\n");
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the element at index %d : ",i);
        scanf("%d",&a[i]);
        
    }
    
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Even : %d",even);
    printf("\n");
    printf("Odd  : %d",odd);

    return 0;
}