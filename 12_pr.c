#include <stdio.h>
 int main()
 {
    int year;
    printf("enter year:\n");
    scanf("%i", &year);

    if(year % 4 != 0)
    {
        printf("it is a common year\n");
    }

    else if(year % 100 != 0)
    {
        printf("it is leap year\n");
    }

    else if(year % 400 != 0)
    {
        printf("it is common year\n");
    }

    else
    {
        printf("it is leap year\n");
    }
    return 0;
 }