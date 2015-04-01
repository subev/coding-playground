#include <stdio.h>

void run() {
    int undefined;
    int age = 5;

    age += 1;
    undefined += 1;

    printf("undefined is %d and age is %d\n", undefined, age);
}

int main() {
   run();
   run();
   run();
}
