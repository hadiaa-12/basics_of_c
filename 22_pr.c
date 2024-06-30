#include <stdio.h>

int main()
{
    int n;
    int sum = 0;

    printf("enter integer:\n");
    scanf("%d", &n);

    for(int i = 1; i < 11; i++)
    {
        sum = sum + n*i;

    }
    printf("%d\n", sum);

}