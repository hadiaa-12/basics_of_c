#include <stdio.h>

int main()
{
    int n;
    
    printf("enter income:\n");
    scanf("%d", &n);

    if (n >= 250000 && n <= 500000)
        printf("5%%\n");

    else if (n >= 500000 && n <= 1000000)
        printf("20%%\n");

    else if(n >= 1000000)
        printf("30%%\n");

    else if( n < 250000)
        printf("no tax\n");
}