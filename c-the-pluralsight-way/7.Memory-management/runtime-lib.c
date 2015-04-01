#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
    int sizeOfFrame = 12;
    int* pointer = (int *) malloc(sizeOfFrame);
    if (!pointer) {
        return 1; //the allocation has failed;
    }
    printf("pointer is %p, and size is%d\n",pointer, sizeof(pointer));

    int i = 0;
    for (; i < sizeOfFrame/sizeof(pointer); i++) {
        printf("on address %p there is decimal value of %d\n", pointer+i, *(pointer + i));
    }
    free(pointer);


    //another example for frame

    void* frame = malloc(50);
    //free function
    free(frame);
    char* websocketmessage = (char *)malloc(1312);
    free(websocketmessage);


    //BAD THINGS CAN HAPPEN WHEN, uncomment and check what happens
    //1)free-ing a pointer which was already cleared
    //free(websocketmessage);
    //2)de-referencing a pointer which was cleared
    int t = *websocketmessage;
    printf("%d\n", t);

    return 0;
}
