#include <stdio.h>
void pass(int *p);
int main()
{
    int i = 3;
    printf("address of i is %u\n", &i);
    pass(&i);

}
void pass(int *p)
{
    printf("address is %u\n", p);
}