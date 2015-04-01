#include <stdio.h>

int main() {
    float celsius = 0, farenheit, kelvin;

    while (celsius < 100) {
        celsius += 10;

        farenheit = celsius * 9 / 5 + 32;
        kelvin = celsius + 273.15f;

        printf("cool celseius %.2f , farenheit %.2f , kelvin %.2f\n",
                celsius,
                farenheit,
                kelvin);
    }
}
