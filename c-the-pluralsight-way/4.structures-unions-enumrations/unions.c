#include<stdio.h>

union OneThingOrANother {
    int firstThinhg;
    double secondThing;
};

union SomeUnionWithChar {
    int firstThinhg;
    char secondThing;
};

typedef union {
    double secondThing;
    int firstThinhg;
} Switched;

void main() {
    printf("size of a int is %d\n", sizeof(int));
    printf("size of a double is %d\n", sizeof(double));
    printf("size of our union is %d\n", sizeof(union OneThingOrANother));
    printf("size of our other union is %d\n", sizeof(union SomeUnionWithChar));
    printf("size of our switched union is %d\n", sizeof(Switched));
}
