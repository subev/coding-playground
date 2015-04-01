#include <stdio.h>

int main(int argc, const char *argv[])
{
    int myArray[] = { 5, 6, 7 };
    printf("%d %d %d\n", myArray[0], myArray[1], myArray[2] );

    int secondArray[3] = { 2 };
    printf("%d %d %d\n", secondArray[0], secondArray[1], secondArray[2] );

    printf("%s\n", "blablabla");
    printf("array is of %d bits and element of array is %d bits\n", sizeof(myArray) , sizeof(myArray[0]));
    int sizeOfArray = sizeof(myArray) / sizeof(myArray[0]);
    int i = 0;
    for (; i < sizeOfArray; i++) {
        printf("%d has value of %d\n",i , myArray[i]);
    }

    return 0;
}
