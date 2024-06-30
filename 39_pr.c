#include <stdio.h>

void calculate(float x, float y, float *sum, float *average);
int main()

{
    float a = 2;
    float b = 3;
    float sum;
    float average;
    calculate( a, b, &sum, &average);
    printf("the value of sum is %f and average is %f\n", sum, average) ;
}
void calculate( float x, float y, float *sum, float *average)
{
    *sum = x + y;
    *average = (x + y)/2;
    
}