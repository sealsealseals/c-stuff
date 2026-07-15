#include <stdio.h>

int main(void) 
{
    int i;
    int n;
    int c;

    for (c = 0; c < 5; c++) { // until c is equal to 5, continue the loop and re-run the program
    
        printf("Input a number for odd/even evaluation: \n");
    
    scanf("%d", &n);


    i = n; // old number inputted is stored
    n = n % 2; // n is overwritten by modulo result (0 for even, 1 for odd)

    if (n == 0) {
        printf("%d is even.\n", i);
    }
    else
    {
        printf("%d is odd.\n", i);
    }
    
}

}