#include <stdio.h>

typedef union {
    int first;
    char second;
} OneThingOrANother;

typedef enum {
    FirstKey,
    SecondKey
} Roles;

enum  Position{
    Admin = 44,
    User = 55
};

void main() {
    OneThingOrANother t = { 123 };
    //t.second = 456; //does not allow to change
    //
    //since the properties of the type share the same adress both, properties show the same
    printf("the first prop from the union is %d\n", t.first);
    printf("the second prop from the union is %d\n", t.second);
    //not allowed
    //printf("the whole union is %d\n", t);


    Roles r;
    r = FirstKey;
    printf("the first key from the union is %d\n", r);
    r = SecondKey;
    printf("the first key from the union is %d\n", r);


    enum Position p = User;
    printf("position user has value of %d\n", p);
    p = Admin;
    printf("position Admin has value of %d\n", p);


    //looks like initializers are applicable
    enum Position d = { FirstKey };
    printf("Postion is with value %d\n", p);

    int foo = { 101 };
    printf("Foo is with value %d\n", foo);


    OneThingOrANother bar; //= 777;
    bar.first = 987;
    printf("Bar second which is char is with value %d\n", bar.second);
}
