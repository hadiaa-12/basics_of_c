#include <stdio.h>

float force(int mass);
int main()

{
    int m;
    printf("enter mass of body:\n");
    scanf("%d", &m);
    printf(" force on body is %f", force(m));

}

float force(int mass)
{
    float x;
    x = mass*9.81;
    return x;
}