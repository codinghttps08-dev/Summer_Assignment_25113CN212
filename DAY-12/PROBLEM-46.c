#include<stdio.h>
#include<math.h>
int arm(int x)
{
    int sum = 0,a;
    // int temp = x;
    while(x!=0)
    {
        a = x%10; //1.   153 .>>> 15
        x = x/10;
        sum = sum + a*a*a;
        printf("a=%d x=%d sum=%d\n", a, x, sum);
    }
    // printf("%d",15/10);
    return sum;
}
int main()
{
    int n,c;
    printf("Enter a number : ");
    scanf("%d",&n);
    c = arm(n);
    if (c==n)
    {
        printf("Armstrong Number");
    }
    if (c!=n)
    {
        printf("Not Armstrong Number");
    }
    return 0;

}