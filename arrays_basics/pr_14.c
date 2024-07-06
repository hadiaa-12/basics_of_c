#include <stdio.h>

int main()

{
    int table[3][10];
    int num[3];
    for(int i = 0; i < 3; i++)
    {
        printf("enter number for %d table\n", i + 1);
        scanf("%d", &num[i]);
    }
    
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 10; j++)
        { 
            table[i][j] = num[i]*(j + 1);
            printf("%d ", table[i][j]);
        }
        printf("\n");
    }
}