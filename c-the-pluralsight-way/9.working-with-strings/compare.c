#include <stdio.h>
#include <string.h>

#include <stdlib.h>
int main(int argc, const char *argv[])
{
    char* string = "hello world!";
    printf("The size of string is %d\n", strlen(string));

    printf("A > B %d\n", strcmp("A", "B"));
    printf("A < B %d\n", strcmp("B", "A"));
    printf("A = B %d\n", strcmp("A", "A"));

    int number = strtol ("this is some 123 number", 0, 10);
    printf("%d\n", number);

    return 0;
}
