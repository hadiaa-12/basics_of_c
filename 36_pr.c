#include <stdio.h>

int main()

{
    int a = 3;
    printf("the address of a is %u\n", &a);

    printf("the value at address of a is %d\n", *(&a));

}