#include <stdio.h>

int main() 
{
    int sum = 0, i;
    for(i = 1; i <= 100; i++) 
    {
        if(i % 13 == 0) 
        {
            sum += i;
        }
    }
    printf("Sum of all numbers divisible by 13 between 1 to 100 is %d\n", sum);
    return 0;
}