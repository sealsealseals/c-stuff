#include <stdio.h>

int main(void)
{
    int grade = 0;

    printf("Input a mark from 0-100\n");
    scanf("%d", &grade);

    if (grade < 0 || grade > 100)
    {
        printf("Invalid grade");
    }
    else if (grade >= 90)
    {
        printf("A");
    }
    else if (grade >= 80)
    {
        printf("B");
    }
    else if (grade >= 70)
    {
        printf("C");
    }
    else if (grade >= 60)
    {
        printf("D");
    }
    else
    {
        printf("F");
    }
}
