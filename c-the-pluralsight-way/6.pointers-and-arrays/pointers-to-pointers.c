#include <stdio.h>

void setMinAndMaxFromAnArray(int* begin, int* end, int** min, int** max) {
    if(begin == end) {
        return;
    }

    *min = *max = begin;

    while (++begin != end) {
        if (**min > *begin) {
            *min = begin;
        }
        if (*begin > **max) {
            *max = begin;
        }
    }
}

int main(int argc, const char *argv[])
{
    int value = 123;

    int* firstPointer = &value;
    int** secondPointer = &firstPointer;

    printf("first pointer is %p and its value is %d,\n", firstPointer, *firstPointer);
    printf("second pointer is %p and its value is (again a pointer) %p which actually points to (which is int) %d\n", secondPointer, *secondPointer, **secondPointer);

    //other lesson

    int array[] = { 2, 4, 3, 1, 7, 5, 6 };
    int arrayTwo[] = { -5 };
    int* min = 0;
    int* max = 0;
    setMinAndMaxFromAnArray(array, array + sizeof(array) / sizeof(array[0]), &min, &max);
    printf("min value is %d, and max value is %d\n", *min, *max);
    setMinAndMaxFromAnArray(arrayTwo, arrayTwo + sizeof(arrayTwo) / sizeof(arrayTwo[0]), &min, &max);
    printf("min value is %d, and max value is %d\n", *min, *max);

    return 0;
}

int getSizeOfArray(int* array){

}


