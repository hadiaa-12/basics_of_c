#include <stdio.h>
int main()
{
    int n;
    int numbers[] = { 0,5,2,3,4,10};

    printf(" enter any integer here:\n");
    scanf("%i", &n);

    for (int i = 0; i < 6; i++)
    {
        if( numbers[i] == n)
        {
            printf("found\n");
            return 0;
            
        }        
    }
    
    {
        printf("missing\n");
        return 1;
    }
   

}