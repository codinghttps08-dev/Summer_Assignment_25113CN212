#include<stdio.h>
int main()
{
   int n,sum;
   printf("Enter the last  number upto which you want to calculate the of natural number : ");
   scanf("%d",&n);

   sum = n*(n+1)/2;
   printf("The sum of first %d natural number is : %d",n,sum);
   return 0;
    
}