#include <stdio.h>

int main()
{
    int num[2][2][2] = {
        {
            {1, 2},{2, 3}
        },
        {
            {5, 6}, {9, 3}
        }

    };
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            for(int k = 0; k < 2; k++)
            {
                printf("%u ", &num[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

}