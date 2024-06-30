#include <stdio.h>
 int sum(int n);
 int main()

 {
    int integer;
    printf("enter integer:\n");
    scanf("%d", &integer);
    printf("%d", sum(integer));

 }

 int sum(int n)
 
 {
    int sum = 0;
    for(int i = 0; i < n+1; i++)
    sum = sum + i;
    return sum;

 }