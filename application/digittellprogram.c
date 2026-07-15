#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: \n");
    scanf("%d", &n);

    // single digit check
    if (n <= 9 && n >= 0)
    {
        printf("Single digit\n");
    }
    else if (n >= 10 && n <= 99)
    {
        printf("Double digit\n");
    }
    else if (n >= 100 && n <= 999)
    {
        printf("Triple digit\n");
    }
    else if (n >= 1000 && n <= 9999)
    {
        printf("Quadruple digit\n");
    }
    else
    {
        printf("Number out of bounds\n");
    }
}