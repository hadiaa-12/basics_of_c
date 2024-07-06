#include <stdio.h>
int main()
{
    int a[5];
    for(int i = 0; i < 5; i++)
    {
        printf("enter marks of %d student\n", i);
        scanf("%d", &a[i]);
    }
    for(int j = 0; j < 5; j++)
    {
        printf("marks of %d student is %d\n", j, a[j]);
    }

}