#include <stdio.h>

//can ommit Person before curly braces below
typedef struct {
    int Age;
    int Male;
} Person;

typedef unsigned char byte;

struct Color {
    byte Red;
    byte Green;
    byte Blue;
};

void main() {
    Person p = { 3 , 1 };
    // missing fields are initialized with 0
    struct Color c = { 222, 123 };
    printf(" Age is %d and it is male %d", p.Age, p.Male);
    printf(" RED is %d GREEN is %d BLUE is %d", c.Red, c.Green, c.Blue);
}
