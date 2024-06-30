#include <stdio.h>
int multiply(int a, int b);
int main()
{
    int n;
    printf("enter integer:\n");
    scanf("%d", &n);

    for(int i = 1; i < 11; i++)
    
    {
        printf("%d x %d = %d\n", n, i, multiply(n,i));
    }

}

int multiply(int a, int b)
{
    return(a*b);

}