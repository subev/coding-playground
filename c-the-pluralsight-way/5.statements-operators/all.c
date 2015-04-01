#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i;
    for (i = 0; i < 10; i++) {
        printf("this is for %d \n", i);
    }

    while (i > 0) {
        i--;
        printf("this is while loop %d \n", i);
    }

    do {
        printf("this is do..while %d\n", i);
        i++;
    } while (i < 10);

    return 0;
}
