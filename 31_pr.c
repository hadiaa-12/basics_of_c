#include <stdio.h>

int sum(int n);
int main()

{
    int num;
    printf("enter number:\n");
    scanf("%d", &num);
    printf("sum of natural number is %d", sum(num));

}

int sum(int n)
{
    if( n == 1)
    {
        return 1;
    }
    else
    {
        return n + sum(n - 1);
    }

}