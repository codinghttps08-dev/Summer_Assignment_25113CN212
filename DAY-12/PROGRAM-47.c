#include<stdio.h>
#include<math.h>
void fib(int x)
{
    int next,i;
    int a = 0;
    int b = 1;
    printf("%d ",0);
    for (i =0 ;i<=x-1 ;i++)
    {
        next = a + b;
        a = b;
        b = next;
        printf("%d ",next);
    }
    
}
int main()
{
    int n,c;
    printf("Enter a number : ");
    scanf("%d",&n);
    fib(n);
    return 0;

}