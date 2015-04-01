//to see the pre-procesor magic use -> gcc main.c -E | less
//and you might need to comment the stdio include since it will generate a lot of trash
#include <stdio.h>
#include "calculations.h"

void main() {
    printf(" 5 * 5 = %d\n", multiply(2, 6));
    /*printf(" 5 * 5 = %d\n", SQUARE(5));*/
    /*printf(" 5 * 5 = %d\n", myMacroMagic);*/
}
