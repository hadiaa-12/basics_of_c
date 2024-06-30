#include <stdio.h>


int main()
{
    int r;
    int h;
    printf("enter the value of radius:\n");
    scanf("%d", &r);
    printf("enter the value of height:\n");
    scanf("%d", &h);
    printf("area of circle is:%f\n", 3.14*r*r);
    printf("volume of cylinder is:%f\n", 3.14*r*r*h);

    return 0;

}