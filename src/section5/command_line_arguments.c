#include <stdio.h>

int main(int argc, char *argv[]) {
    int numberOfArguments = argc;
    char *argument1 = argv[0];
    char *argument2 = argv[1];

    printf("number of arguments: %d\n", numberOfArguments);
    printf("argument 1 is the program name: %s\n", argument1);
    printf("argument 2 is the command line argument: %s\n", argument2);
    return 0;
}
