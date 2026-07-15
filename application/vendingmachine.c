#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int drinkChoice;
    bool success;

    printf("Enter drink choice: \n 1: Espresso\n 2: Latte\n 3: Cappucino\n 4: Water\n");
    success = scanf("%1d", &drinkChoice);

    if (success == true)
    {
        switch (drinkChoice) 
        {
        default: printf("Invalid Input");
        break;
        case 1: printf("Espresso selected");
        break;
        case 2: printf("Latte selected");
        break;
        case 3: printf("Cappucino selected");
        break;
        case 4: printf("Water selected");
        break;
        }
    }



}