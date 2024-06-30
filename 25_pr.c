#include <stdio.h>

int main()

{
    int n, prime = 1;
    printf("enter number to check whether it is prime or not\n");
    scanf("%d", &n);

    for(int i = 2; i < n ; i++)
    {
        if(n%i == 0)
            {
                prime  = 0;
                break;
            }
    }

    if(prime)
    {
        printf("number is prime\n");
    }
    else 
    {
        printf("number is not prime\n");
    }

}