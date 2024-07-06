#include <stdio.h>
int main()
{
    int marks[4][2];

    marks[0][0] = 23;
    marks[0][1] = 43;

    marks[1][0] = 25;
    marks[1][1] = 78;

    marks[2][0] = 56;
    marks[2][1] = 90;

    marks[3][0] = 12;
    marks[3][1] = 34;

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }

}