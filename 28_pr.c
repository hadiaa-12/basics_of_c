#include <stdio.h>

float temp(int celsius);
int main()

{
    int n;
    printf("enter temp in celsius:\n ");
    scanf("%d", &n);

    printf("temp in far is %f\n", temp(n));

}

float temp(int celsius)
{
    float far;
    far = 1.8* celsius + 32;
    return far;
}