#include <stdio.h>

int main() 
{
    int i, num, min, max;

    printf("Enter 100 numbers:\n");
    for(i = 1; i <= 100; i++) 
    {
        scanf("%d", &num);
        if(i == 1) 
        {
            min = max = num;
        } else 
        {
            if(num < min)
                min = num;
            if(num > max)
                max = num;
        }
    }

    printf("Minimum number is %d\n", min);
    printf("Maximum number is %d\n", max);

    return 0;
}