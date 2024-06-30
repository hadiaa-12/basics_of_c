#include <stdio.h>

int main()

{
    int n;
    printf("enter integer:\n");
    scanf("%d", &n);

    int i = 1;
    int sum = 0;

    while(i < n+1)
    {   
     sum = sum + i;
     i++;
    }

    printf("%d", sum);
    return 0;

}