#include <stdio.h>


int main()
{
    int a;
    printf("enter number:\n");
    scanf("%d", &a);
    int rem = a % 97;
    printf("%d\n", rem);

    return 0 ;
}