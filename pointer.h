/**
 * Methods related to working with pointers
*/
#include<stdio.h>

/**
 * From a *pointer from a variable using a address operator "&"gp
*/
void printAddress(void* pointer) {
    printf("%p", pointer);
}