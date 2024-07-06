#include <stdio.h>
int main()
{
    int marks[] = {1, 2, 3};
    int *ptr = marks;
    *ptr = 23;
    ptr++;
    *ptr = 80;
    ptr++;
    *ptr = 67;
    for(int i = 0; i < 3; i++)
    {
        printf("marks is %d\n", marks[i]);
    }
}