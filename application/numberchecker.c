#include <stdio.h>

int main()
{
    int n;
    printf("Enter an integer: \n");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("Zero was inputted\n");
    }
    else if (n >= 1)
    {
        printf("Positive Number\n");
    }
    else
    {
        printf("Negative");
    }
}