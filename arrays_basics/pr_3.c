#include <stdio.h>
int main()
{
    int i = 5;
    int *ptr = &i;
    printf("value of address of i is %u\n", &i);
    printf("value of ptr to i is %u\n", ptr);
    ptr++;
    printf("value of ptr to i is %u\n", ptr);
    printf("value of ptr to i is %u\n", ptr-&i);

}