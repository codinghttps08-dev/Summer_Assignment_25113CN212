#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,rem;
    printf("Enter a number : ");
    scanf("%d",&n);
    i = 0;
    j = 0;
    while(n!=0)
    {
        rem = n %10;
        i = i + (pow(2,j))*rem;
        j = j + 1;
        n = n/10;
    }
    printf("%d",i);
    return 0;
}