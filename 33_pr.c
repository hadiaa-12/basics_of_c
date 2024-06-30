#include <stdio.h>

void pyramid(int n);
int main()

{
    int x ;

    printf("enter integer:\n");
    scanf("%d", &x);

    pyramid(x);

}

void pyramid(int n)

{
    if(n <= 0)
    {
        return;
    }
    pyramid(n - 1);

    for(int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
   


}