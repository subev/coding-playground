#include <stdio.h>

int main(int argc, const char *argv[])
{
    printf("%I64d\n", 1112223335666); //outputs error
    printf("%.2f\n", 11126.23); //rounds to two digits after the last symbol
    printf("%10d\n", 123); //adds extra space in front


    //left aligned
    printf("some text%-10d some text after\n", 65464464); //adds extra space in front
    printf("some text%-10d some text after\n", 123); //adds extra space in front

    //some string
    printf("%.*s\n", 5, "hello worlld! lol :)");
    return 0;
}
