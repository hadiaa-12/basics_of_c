#include <stdio.h>

int factorial(int num);
int main()

{
    int n;
    printf("enter number:\n");
    scanf("%d", &n);
    printf("%d", factorial(n));
}

int factorial(int num)
{
    if (num ==0 || num == 1)
    {
        return 1;
    }

    else 
    {
        return num*factorial(num-1);
    }
}