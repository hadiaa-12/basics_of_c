#include <stdio.h>
 int main()
{
    int n;
    int i = 0;
    printf("enter count of numbers:\n");
    scanf("%i", &n);
    do
    {
        printf("%i\n", i+1);
        i++;
    }
       
    while(i < n);
    return 0;

}