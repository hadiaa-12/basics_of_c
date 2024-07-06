#include <stdio.h>

int main()
{
    int table[10];
    int n;
    
    {
        printf("enter number for multiplication table\n");
        scanf("%d", &n);
    }

    for(int i = 0; i < 10; i++)
    {
        table[i] = n*(i + 1);
        printf("%d x %d = %d\n", n,  i + 1, table[i] );
    }
}