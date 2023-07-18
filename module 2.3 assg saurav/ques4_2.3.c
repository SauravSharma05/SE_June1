#include <stdio.h>

int f(int n)
{
    if(n==0)
        return(1);
    return(n*f(n-1));
}
int main()
{
    int x,n;
    printf(" Enter Number : ");
    scanf("%d",&n);
    x=f(n);
    printf("%d",x);
}
