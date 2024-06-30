#include <stdio.h>

void pattern(int n);
int main()

{
    int n;
    printf("enter any integer\n");
    scanf("%d", &n);
    pattern(n);

}

void pattern(int n)
{
    for(int i = 0; i < n ; i++)
    {
        for(int j = 0; j < 2*i + 1; j++)
            {
                printf("*");
            }
        printf("\n");
    }


}