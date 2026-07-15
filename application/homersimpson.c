#include <stdio.h>
#define doh do
#define whilest while
#define iffy if 


int main (void)
{
    int x = 1;

    doh {
        iffy (x == 1)
            printf("D'oh!\n");
    } whilest (x <= 10);
        x++;



}


