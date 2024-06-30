#include <stdio.h>

int main()
{
    int n;
    printf("enter number:\n");
    scanf("%d", &n);

    int factorial = 1;
    
    for(int i = 1; i < n+1; i++)
    {
        factorial *= i;
    }
    printf("%d", factorial);

    if(n = 0)
    {
        printf("%d", 1);
    }

}