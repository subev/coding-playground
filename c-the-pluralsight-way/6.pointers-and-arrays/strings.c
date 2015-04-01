#include <stdio.h>

int main(int argc, const char *argv[])
{
    char string[] = "this is some string";

    char* stringPointer = "and another";

    printf("%s has %d characters inside of it\n", string, sizeof(string));

    printf("%s has %d characters inside of it\n", stringPointer, getStringSizeThroughWhile(stringPointer));

    printf("%s has %d characters inside of it\n", stringPointer, getStringSizeThroughFor(stringPointer));

    return 0;
}

int getStringSizeThroughWhile(char* string) {
    int counter = 0;

    while (*string++) {
        counter++;
    }

    return counter;
}

int getStringSizeThroughFor(char* string) {
    int i = 0;
    for (; *string != 0; string++) {
        i++;
    }
    return i;
}
