#include <stdio.h>

int fibo(int n);
int main()
{
    int x;
    printf("enter number:\n");
    scanf("%d", &x);
    printf("nth element of fibo series is %d", fibo(x));

}

int fibo(int n)
{
    if(n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return fibo(n-1) + fibo(n-2);
    }

}