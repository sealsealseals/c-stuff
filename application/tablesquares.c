#include <stdio.h>

int main(void)
{

    int i, n;

    printf("Enter number of entries: \n ");
    scanf("%d", &n);

    i = 1;
    while (i <= n) {
        printf("%10d%10d\n", i, i * i); // putting a number inbetween % and d, tells C. "i want this to take up an exact amount of space"
        i++;
    }




}