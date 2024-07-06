#include <stdio.h>

int main()
{
    int num[10];
    int *ptr = num;
    num[0] = 10;
    num[1] = 17;
    num[2] = 34;
    num[3] = 6;
    num[4] = 26;
    num[5] = 87;
    num[6] = 12;
    num[7] = 55;
    num[8] = 56;
    num[9] = 45;
    printf("value at ptr is %d\n", *ptr);
    printf("value of address to first element of array is %u\n", ptr);
    ptr+=2;
    printf("now pointer will point to third element of array %u\n", ptr);
    printf("value at ptr now is %d\n", *ptr);    

}