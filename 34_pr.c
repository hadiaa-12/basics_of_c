#include <stdio.h>
int sum(int *x, int *y);
int main()

{
    int a = 2;
    int b = 3;
    printf("the value of a + b is %d:\n",sum(&a,&b));
    printf("the value of a and b is %d and %d\n", a , b);

}

//pass by reference

int sum(int *x, int *y)
{
    *x = 6;
    return *x + *y;
}