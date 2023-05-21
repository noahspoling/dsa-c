#include <stdio.h>
#include "stringFuncs.h"
#include <string.h>

int main() {
    char *inputPointer1, *inputPointer2, *newStrPointer;
    char input[] = "Test Me";

    char input2[] = "Test Me Again";

    inputPointer1 = input;
    inputPointer2 = input2;

    char newStr[strlen(input) + strlen(input2) - 2];
    newStrPointer = newStr;
    append(inputPointer1, inputPointer2, newStrPointer);

    printf("Output: %s\n", newStr);
}