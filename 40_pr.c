#include <stdio.h>

int main()
{
    int i = 3;
    int *p1 = &i;
    int **p2 = &p1;
    printf("value of i is %d\n", **p2);
}