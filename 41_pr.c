#include <stdio.h>
int multiply(int x);
int main()

{
    int a = 4;
    printf("value before multiplying it is %d\n", a);

    multiply(a);
    printf("value after multiplying it is %d\n", a);


}

int multiply(int x)
{
    x = 5;
    return 10*x;
}