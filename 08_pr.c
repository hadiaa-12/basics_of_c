#include <stdio.h>

int main()

{
    int a , b, c;

    printf("enter marks of english:\n");
    scanf("%d", &a);

    printf("enter marks of maths:\n");
    scanf("%d", &b);

    printf("enter marks of biology:\n");
    scanf("%d", &c);

    if (a > 33 && b > 33 && c > 33 && (a+b+c)/3 > 40) 
        printf("pass\n");
    else
        printf("fail\n");
    
}