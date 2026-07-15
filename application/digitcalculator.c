#include <stdio.h>

int main(void)
{

    int digits = 0, n;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    // check for negative numbers

    if (n < 0) {
        printf("Invalid input\n");
        return 0;
}

    // WHILE-DO 

    do {
        n /= 10; // n = n / 10
        digits++; // increment digits by 1
    } while (n > 0);

    // basically.. everytime n (the integer you enter) is divided by 10, it increments digits by 1 starting at 0. so if it divides by 10 twice, it increments twice. and it checks if n is less than 0



    printf("The number has %d digit(s)\n", digits);

    return 0;



}