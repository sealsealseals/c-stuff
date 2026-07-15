#include <stdio.h>

int main(void)
{
    // VARIABLES

    int x = 0; // horizontal
    int y = 0; // vertical
    int c = 0; // choice for wraparound/snap
    int game_run = 0;
    char input;

    // logic
    printf("- GRID MODE -\n 0: Wraparound\n 1: Lock\n Select: ");
    scanf("%1d", &c);
    if (c == 1 || c == 0) {
        printf("-- SUCCESS --\nPress W/A/S/D to begin\n");
        game_run = 1; // while (1) so game will start
    } 
    else {
        printf("Invalid Input\n");
    }

    while (game_run)
    {

        scanf(" %1c", &input);
        // input reader
    

        if (input == 'W' || input == 'w' || input == ' ') {y++;}
        if (input == 'S' || input == 's') {y--;}
        if (input == 'D' || input == 'd') {x++;}
        if (input == 'A' || input == 'a') {x--;}

        printf("X=%d Y=%d\n", x, y);


        switch (c) { // WRAPAROUND
        case 0: {
        if (x <= -1) {printf("Wraparound!\n");x = 4;}
        if (y <= -1) {printf("Wraparound!\n");y = 4;}

        if (x >= 5) {printf("Wraparound!\n");x = 0;}
        if (y >= 5) {printf("Wraparound!\n");y = 0;}
        break;            
        }
        case 1: { // GRIDLOCK
        if (x <= -1) {x++;}
        if (y <= -1) {y++;}

        if (x >= 5) {x--;}
        if (y >= 5) {y--;}
        break;
        }
        }

        // grid render

        for (int row = 4; row >= 0; row--) // the number in row = 4 is the amount of rows (horizontal). its 0 - 4, so total 5
        {
            for (int col = 0; col < 5; col++) // starting at 0, check if column is less than 5, if true, run body.
            {
                if (col == x && row == y)
                    printf("P");
                else
                    printf("-");     
            }
        printf("\n");
        }
        printf("\n");

    }

    return 0;

}