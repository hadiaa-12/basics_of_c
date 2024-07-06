#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int point(char u, char c);
int main()

{
    char user, computer;
    srand(time(0));
    int number = rand() % 100 + 1;

    if (number < 33)
    {
        computer = 's';
    }
    else if (number < 66)
    {
        computer = 'w';
    }
    else
    {
        computer = 'g';
    }

    printf("enter 's' for snake , 'w' for water, 'g' for gun\n");
    scanf("%c", &user);
    int result = point(user, computer);
    if(result ==0)
    {
        printf("game drawn\n");
    }
    else if (result == 1)
    {
        printf("you win\n");
    }
    else
    {
        printf("you lose\n");
    }
    printf("computer choose %c and user choose %c\n", computer, user);



}
int point(char u, char c)
{
    if(u == c)
    {
        return 0;
    }
    else if (u == 's' && c == 'w' || u == 'w' && c == 'g' && u == 'g' && c == 's' )
    {
        return 1;
    }
    else
    {
        return -1;
    }
}