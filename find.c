#include <stdio.h>

int main() 
{
    int i, boys = 0, girls = 0;
    char sex;

    printf("Enter sex code for 50 students (M for boy, F for girl):\n");
    for(i = 1; i <= 50; i++) 
    {
        printf("Student %d (M/F): ", i);
        scanf(" %c", &sex); 
        if(sex == 'M' || sex == 'm')
            boys++;
        else if(sex == 'F' || sex == 'f')
            girls++;
        else
            printf("Invalid input. Please enter M or F.\n");
    }

    printf("Number of boys: %d\n", boys);
    printf("Number of girls: %d\n", girls);

    return 0;
}