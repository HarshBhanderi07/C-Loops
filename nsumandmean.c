#include <stdio.h>

int main() 
{
    int n, i, value, sum = 0;
    float mean;

    printf("Enter the number of values: ");
    scanf("%d", &n);

    printf("Enter %d values:\n", n);
    for(i = 1; i <= n; i++) 
    {
        scanf("%d", &value);
        sum += value;
    }

    mean = sum / (float)n;

    printf("Sum = %d\n", sum);
    printf("Mean = %.2f\n", mean);
    return 0;
}