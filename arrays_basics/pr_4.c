#include <stdio.h>
void func(int *ptr);
int main()
{
    int marks[] = {1, 2, 3};
    func(marks);
    return 0;


}
void func(int *ptr)
{
    for(int i = 0; i < 3; i++)
    {
        // *(ptr++) will first print and than increment ptr by 1

        printf("the value of marks[%d] is %d\n",i , *(ptr++));
    }
}