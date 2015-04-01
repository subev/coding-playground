#include <stdio.h>

int main() {
    float celsius, farenheit, kelvin;

    celsius = 21;
    farenheit = celsius * 9 / 5 + 32;
    kelvin = celsius + 273.15f;

    printf("cool celseius %.2f , farenheit %.2f , kelvin %.2f\n",
            celsius,
            farenheit,
            kelvin);
}
