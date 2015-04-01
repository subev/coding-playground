#include <stdio.h>

struct Person {
    int Age;
    int Male;
};

void main() {
    struct Person p;
    p.Age = 25;
    p.Male = 0;
    printf(" Age is %d and it is male %d", p.Age, p.Male);
}
