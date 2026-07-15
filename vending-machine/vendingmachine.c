#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int drinkChoice;
    bool success;

    printf("Enter drink choice: \n 1: Water\n 2: Latte\n 3: Cappucino\n 4: Espresso\n 5: Milk\n> ");
    success = scanf("%1d", &drinkChoice);

    if (success == true)
    {
        switch (drinkChoice) 
        {
        default: printf("Invalid Input");
        break;
        case 1: printf("< WATER SELECTED >");
        break;
        case 2: printf("< LATTE SELECTED >");
        break;
        case 3: printf("< CAPPUCINO SELECTED >");
        break;
        case 4: printf("< ESPRESSO SELECTED >");
        break;
        case 5: printf("< MILK SELECTED >");
        break;
        }
    }



}

// first try at switch statements