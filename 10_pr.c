#include <stdio.h>

const  int N = 3;
float average( int size , int array[]);


int main()
{
    
    int scores[N];
    for(int i = 0; i < N ; i++ )

    {
        printf("enter your score:\n");
        scanf("%i", &scores[i]);
    }
    
    {
        printf("average is %f:\n", average(N,scores));
    }

}

float average( int size , int array[])
{
    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum +=array[i];

    }
    return sum/(float) size;
}

