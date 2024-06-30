#include <stdio.h>

int sum(int num);
int main()

{
    int n;
    do
    {
        printf("enter integer:\n");
        scanf("%d", &n);
    }
    while(n < 1);

    {
        printf("%d", sum(n));
    }

}

int sum(int num)

{
    int sum = 0;
    for(int i = 0; i < num + 1 ; i++)
    sum = sum + i;
    return sum;
}
