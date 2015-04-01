#include <stdio.h>

//most valuable lesson till now
void byPluralSight() {

    int kur = 111;
    int hoi = 222;

    int* ppp1 = &kur;
    int* ppp2 = &hoi;
    printf("p1 is %p and own address is %p\n", ppp1, &ppp1);
    printf("p1 is %p and own address is %p\n", ppp2, &ppp2);

    int array[] = { 123, 456, 789 };
    int numerOfElements = sizeof(array) / sizeof(array[0]);

    int* p = array;

    //should be p instead of array;
    int* end = array + numerOfElements;

    printf("arrsize: %d  elSize: %d\n", sizeof(array), sizeof(array[0]));
    printf("elements are: %d\n", numerOfElements);

    printf("array is : %p\n", array);
    printf("address of array is: %p\n", &array);
    printf("value of array is: %d\n", *array);
    printf("end is: %p\n", end);

    printf("pointer's size is: %d\n", sizeof(p));
    printf("pointer is: %p\n", p);
    printf("pointer's address is: %p\n", &p);
    printf("pointer's value is: %d\n", *p);

    for (; p < end; p += 1) {
        printf("%d    %p\n", *p, p);
    }

    printf("%p\n", &array[2]);
    printf("%s\n", "experimenta");
}


int* findLargestValue(int* start, int* end) {
    if (start == end) {
        return 0;
    }
    int* largest = start;
    for (; start != end; start++) {
        if (*largest < *start) {
            largest = start;
        }
    }
    return largest;
}

int main(int argc, const char *argv[])
{
    //byPluralSight();
    //int someArray[] = { 1, 66, 12, 77, -12, 3 };
    int someArray[0];
    int count = sizeof(someArray) / sizeof(someArray[0]);

    int* largest = findLargestValue(someArray, someArray + count);
    if (largest != 0) {
        printf("largest value is: %d\n", *largest);
    } else {
        printf("%s\n", "the array is empty");
    }
}

