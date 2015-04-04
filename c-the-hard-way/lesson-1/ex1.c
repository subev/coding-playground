#include <stdio.h>
int test = 99;

int main(int argc, char *argv[]){

    int mynum;
    puts("Enter a digit shitfuck");
    printf("the global test variable is %d\n",test);
    test = 44;
    scanf("%d",&mynum);

    printf("The shifted number is %d", bitwiseleft3(mynum));

    return 0;
}

int bitwiseleft3(int input){

    printf("the global test variable is %d\n",test);
    return input<<3;
}
