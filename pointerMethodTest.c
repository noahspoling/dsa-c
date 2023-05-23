#include "pointer.h"

int main() {
    char testString[] = "sasasaslmaskdmasdmka";

    unsigned long n  = sizeof(testString) - 1;
    printf("size of string %lu\n", n);

    for(unsigned long i = 0; i < n; i++) {
        printf("Address of arr[%lu]: ", i);
        printAddress(&testString[i]);
        printf("\n");
    }

    return 0;
}