#include <stdio.h>
#include <ctype.h>

int main(int argc, const char *argv[])
{
    char* nullTerminated = "This is a null terminated string\n";
    char* someString = "This will be some \\ Slashes some qutotes \" and some new line \n some http://www.google.com";
    printf("%s\n", someString);

    /*while (*someString) {*/
        /*printf("%c\t", *someString++);*/
    /*}*/
    char* t;
    for (t = someString; *t; t++) {
        char c = *t;
        printf("%c\t", c);
        if (isalnum(c)) printf("alnum ");
        if (isalpha(c)) printf("alpha ");
        if (islower(c)) printf("lower ");
        if (isupper(c)) printf("upper ");
        if (isdigit(c)) printf("digit ");
        if (isxdigit(c)) printf("xdigit ");
        if (iscntrl(c)) printf("cntrl ");
        if (isgraph(c)) printf("graph ");
        if (isspace(c)) printf("space ");
        if (isblank(c)) printf("blank ");
        if (isprint(c)) printf("print ");
        if (ispunct(c)) printf("punct ");
        printf("\n");
    }

    for (t = someString; *t; t++) {
        char c = *t;
        if (islower(c)) *t = (char) toupper(c);
        else if(isupper(c)) *t = (char) tolower(c);
    }
    printf("End string is :\n%s\n", someString);

    return 0;
}
