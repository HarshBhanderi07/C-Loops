#include <stdio.h>

int main() 
{
    int num, count = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &num);


    if(num == 0) {
        count = 1;
    } else {

        if(num < 0) {
            num = -num;
        }
        temp = num;
        while(temp != 0) {
            temp /= 10;
            count++;
        }
    }

    printf("Number of digits: %d\n", count);
    return 0;
}