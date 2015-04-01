#include <stdio.h>

void pointerPlayTwo() {
    int one = 1;
    int two = 2;
    int* p = &two;
    one = *p;
    *p = 1;
    printf("%d %d\n", one, two);
}

void printAddres(int variable) {
    printf("%p\n", &variable);
}

void pointerPlayOne() {
    int* myPointer = 0;
    int someVariable = 999;
    int otherVarible =444;
    int thirdVarible =333;

    myPointer = &someVariable;

    otherVarible = *myPointer / thirdVarible;

    *myPointer = *myPointer - 111;

    printf("%d, %d, %d\n", someVariable, otherVarible, thirdVarible);
}

int main(int argc, const char *argv[])
{
    pointerPlayOne();
    pointerPlayTwo();

    printAddres(123);
    printAddres(456);
    int a = 555;
    printAddres(a);
    return 0;
}

