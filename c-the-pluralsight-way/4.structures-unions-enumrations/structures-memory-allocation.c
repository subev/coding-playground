#include<stdio.h>

typedef struct {
    short first;
    int second;
    short third;
} Person;

typedef struct {
    short first;
    short third;
    int second;
} Student;

void main() {
    int someInt;
    short someShort;
    Person p;
    Student s;
   printf("size of int is %d, size of short is %d, size of Person is %d and size of Student is %d\n",
           sizeof(someInt), sizeof(someShort), sizeof(p), sizeof(s));
}
