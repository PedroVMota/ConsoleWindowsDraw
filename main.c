#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


int draw_line_top(int x)
{
    int square = 1;
    int slot = 0;
    while (square < 3)
    {
        slot = 0;
        while(slot <= x)
        {
            if(slot == 0 || slot == x)
                printf("+");
            else
                printf("-");
            slot++;
        }
        square++;
    }
    printf("\n");
    return 0;
}


int draw_line_side(int x)
{
    int square = 1;
    int slot = 0;
    while (square < 3)
    {
        slot = 0;
        while(slot <= x)
        {
            if(slot == 0 || slot == x)
                printf("|");
            else
                printf(" ");
            slot++;
        }
        square++;
    }
    printf("\n");
    return 0;
}

int draw_square(int x)
{
    int status = 0;
    int y = x / 2;
    int row = 0;
    int square = 1;
    while(square < 3)
    {
        row = 0;
        while(row <= y)
        {
            if(row == 0 || row == y)
                status = draw_line_top(x);
            else
                status = draw_line_side(x);
            row++;
        }
        square++;
    }

    return status;
}

int main (int argc, char **argv)
{
    int status  = 0;
    if(argc == 2){
        int x = atoi(argv[1]);
        printf("\n\nYour Windows draw is gonna draw a square of %i char by %i char \n", x, x);
        status = draw_square(x);
        printf("\n\n\n");
    }
    else {
        printf("You have to put at least a value");
    }
    return status;
}
