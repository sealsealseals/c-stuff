#include <stdio.h> // adds printf and scanf

int main(void)
{
    // external variables

    
    double height = 80.0;
    double width = 160.0;




    for (double row = 0; row < 80; row++)
    {
        


        for (double col = 0; col < 160; col++) 
        {

            
            double x = -2.0 + (col/width * 3.0); // stupid lerp bullshit. 
            double y = -1.0 + (row/height * 2.0);
            int escape = 0;


            // -2.0 for x is the base (start). 3.0 is the end. the range is -2.0 to 1.0. 
            // x changes everytime it runs because the col variable changes. fo example
            // on iteration 2, -2.0 is added to the result of column divided by width. col/width on iteration 2 is 40. 



            //temporary "scan" variables
            double zx = 0.0; 
            double zy = 0.0;
            // like a "score" variable in a game. starts at 0.0
            // 0.0 is dead centre
            


            for (int iteration = 0; iteration < 400; iteration++) 
            {

                double temp = (zx * zx) - (zy * zy) + x;
                zy = (2.0 * zx * zy) + y;
                zx = temp;

                if ((zx * zx) + (zy * zy) > 4)
                {
                    escape = 1;
                    break;
                }




            }

            if (escape == 0)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
            

        }
    
    
    printf("\n");
    }
    getchar();
    return 0;
}






// holy fucking shit finally. the maths was the hardest part frankly. but it prints the mandelbrot set.
// the math isnt great.. but the logic is easy lol