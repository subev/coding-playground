#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
    FILE* file  = 0;
    int result = fopen(&file, "./somefile.txt", "w");
    fprintf(file, "Hello world mofos");
    printf("%s\n", "successfully wrote to the file");

    return 0;
}
