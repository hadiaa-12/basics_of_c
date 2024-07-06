#include <stdio.h>
void func(int array[2][2]);
int main()
{
    int a[2][2];
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("enter marks of a[%d][%d]\n", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    func(a);
}
void func(int array[2][2])
{
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("%d ", array[i][j]);
            
        }
        printf("\n");
        
    }   
}