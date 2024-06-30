#include <stdio.h>

float average(int a , int b, int c);
int main()

{
    int x;
    int y;
    int z;
    
    printf("value of x is :\n");
    scanf("%d", &x);

    printf("value of y is :\n");
    scanf("%d", &y);

    printf("value of z is :\n");
    scanf("%d", &z);

    
    printf(" average of x, y, z is %f:\n", average( x, y, z));
    
}

float average(int a , int b, int c)

{
    return (a + b + c)/3.0;
}