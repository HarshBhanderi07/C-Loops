#include <stdio.h>

int main() {
    int num, digit, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Digits separated: ");


    if(num == 0) {
        printf("0\n");
        return 0;
    }


    if(num < 0) {
        num = -num;
    }


    int divisor = 1;
    temp = num;
    while(temp >= 10) {
        temp /= 10;
        divisor *= 10;
    }


    while(divisor > 0) {
        digit = num / divisor;
        printf("%d ", digit);
        num %= divisor;
        divisor /= 10;
    }
    printf("\n");

    return 0;
}