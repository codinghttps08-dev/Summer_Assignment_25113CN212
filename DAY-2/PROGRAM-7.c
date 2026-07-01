#include<stdio.h>
int main()
{
    int n,pro=1;
    printf("Enter a number : ");
    scanf("%d",&n);

    while(n>0)
    {
        pro=pro*(n%10);
        n=n/10;
        
    }
    printf("The prduct of the digits is : %d",pro);
   
    return 0;
}