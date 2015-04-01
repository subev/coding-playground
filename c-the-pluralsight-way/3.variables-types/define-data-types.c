#include <stdio.h>

typedef unsigned char byte;

int main () {
    int signedInt = 22;
    float signedFloat = -11.2f;
    double someDouble = 22.11;
    unsigned ud = 22.22;
    char aChar = 'c';

    short canOmitSayingInt = 22;
    long canOmitSayingIntForLong = 22;

    printf("%d\n%f\n%f\n%f\n%f\n%c\n%d\n%d\n", signedInt, signedFloat, someDouble, ud, aChar, canOmitSayingInt, canOmitSayingIntForLong);

    byte b = 0x12; //HEX

    printf("the number with value %d byte is with size %d ",b , (int) sizeof(int));
}

