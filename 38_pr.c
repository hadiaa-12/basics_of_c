#include <stdio.h>
int change(int *p);
int main()

{
    int a = 3;
    printf("value before changing it is %d\n", a);
    change(&a);
    printf("value after changing it is %d\n", a);

}

int change(int *p)
{
    int temp;
    temp = *p;
    *p = 10*temp;
}