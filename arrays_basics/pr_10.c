#include <stdio.h>
void display(int *ptr, int n);
int reverse(int array[], int n);
int main()

{
    int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    display(num, 10);
    reverse(num, 10);
    display(num, 10);
    return 0;
}

int reverse(int a[], int n)
{
    int temp;
    for(int i = 0; i < n/2; i++)
    {
        temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
}
void display(int *ptr, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }
    printf("\n");
}