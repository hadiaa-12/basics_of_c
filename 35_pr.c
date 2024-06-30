#include <stdio.h>
int swap(int *x, int *y);
int main()

{
    int a = 2;
    int b = 3;
    printf("value of a and b before swap is %d and %d\n", a , b);

    swap(&a, &b);

    printf("the value of a and b after swap is %d and %d\n", a, b);


}

int swap(int *x, int *y)
{
    int temp;
    temp  = *x;
    *x = *y;
    *y = temp;


}