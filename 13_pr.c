#include <stdio.h>

int main()
{
    char alphabet;
    printf("enter character:\n");
    scanf("%c", &alphabet);

    if (   'z' >= alphabet && alphabet >= 'a')
    {
        printf("lowercase\n");
    }
    else
    {
        printf("not in lower case\n");
    }

}   