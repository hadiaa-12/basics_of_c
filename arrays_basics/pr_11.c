#include <stdio.h>
void reverse(int a[], int n);
int main()
{
    int array[] = {1, 2, 3, 4, 5};
    reverse(array, 5);

}
void reverse(int a[], int n)
{
    printf("array before reversing\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    int temp;
    for(int i = 0; i < n/2; i++)
    {
        temp = a[i];
        a[i] = a[n - i -1];
        a[n - i -1] = temp;
    }
    printf("array after reversing\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}