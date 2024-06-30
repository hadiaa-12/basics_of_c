#include <stdio.h>
int main()
{
    int numbers[4];

    printf("enter first number:\n");
    scanf("%i", &numbers[0]);

    printf("enter second number:\n");
    scanf("%i", &numbers[1]);

    printf("enter third number:\n");
    scanf("%i", &numbers[2]);

    printf("enter fourth number:\n");
    scanf("%i", &numbers[3]);

    if(numbers[0] >= numbers[1] && numbers[0] >= numbers[2] && numbers[0] >= numbers[3] )
    {
        printf("%i\n", numbers[0]);
    }

    else if(numbers[1] >= numbers[0] && numbers[1] >= numbers[2] && numbers[1] >= numbers[3] )
    {
        printf("%i\n", numbers[1]);
    }

    else if(numbers[2] >= numbers[0] && numbers[2] >= numbers[1] && numbers[2] >= numbers[3] )
    {
        printf("%i\n", numbers[2]);
    }

    else if(numbers[3] >= numbers[0] && numbers[3] >= numbers[1] && numbers[3] >= numbers[2] )
    {
        printf("%i\n", numbers[3]);
    }
    return 0;

}
