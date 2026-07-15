#include <stdio.h>

int main (void)
{
    float num1 = 0.0f;
    float num2 = 0.0f;
    char arithmetic;
    float result;
    
    printf("Enter number 1: ");
    scanf("%f", &num1);
    printf("\nInputted: %.3f, %.3f\n", num1, num2);

    printf("Enter number 2: ");
    scanf("%f", &num2);
    printf("\nInputted: %.3f, %.3f\n", num1, num2);

    printf("Select an arithmetic operator: \n+\n-\n*\n/\nSelection: ");
    scanf(" %c", &arithmetic);

    switch (arithmetic) {
        case '+': result = num1 + num2;
        break;
        case '-': result = num1 - num2;
        break;
        case '*': result = num1 * num2;
        break;
        case '/': result = num1 / num2;
        break;
        default: printf("Invalid"); 
    }

    

    printf("Result: %.3f", result);

return 0;
}