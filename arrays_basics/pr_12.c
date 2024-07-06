#include <stdio.h>
int count(int array[], int n);
int main()

{
    int num[] = {-1, 2, 3, 4, 5};
    printf("%d", count(num, 5));
}

int count(int array[], int n)
{
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(array[i] >= 0)
        {
            count++;
        }
        else
        {
            count = count;
        }
    }
    return count;
}