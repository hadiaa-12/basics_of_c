#include <stdio.h>

int main()

{
    int n;
    int prime = 1;
    printf("enter n here\n");
    scanf("%d", &n);

    for(int i = 2; i < n; i++)
    {
        if(n%i == 0)
        {
            prime = 0;
            break;

        }

    }

    if(prime)
    {
        printf("prime\n");
    }
    else
    {
        printf("not prime\n");
    }
}