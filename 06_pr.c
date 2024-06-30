#include <stdio.h>


int main()
{
    float c;
    printf("enter the temperature in celsius:\n");
    scanf("%f", &c);
    printf("temperature in far:%f\n", (1.8 * c) + 32);

    return 0;
}