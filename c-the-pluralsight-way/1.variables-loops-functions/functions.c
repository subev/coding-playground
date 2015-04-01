#include <stdio.h>

float celsius_to_farenheit(int celsius) {
    return celsius * 9 / 5 + 32;
}

float celsius_to_kelvin(int celsius) {
    return celsius + 273.15f;
}

int main() {
    float celsius = 0;

    while (celsius < 100) {
        celsius += 10;
        printf("cool celseius %.2f , farenheit %.2f , kelvin %.2f\n",
                celsius,
                celsius_to_farenheit(celsius),
                celsius_to_kelvin(celsius));
    }
}
