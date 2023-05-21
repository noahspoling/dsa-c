#include <stdio.h>
#include "arrayOperations.h"

/**
 * NOTE GCC REQUIRES SIN AND OTHER TRIG FUNCTIONS TO BE COMPILED 
 * WITH -lm
*/

int main() {
    double arr[] = {1,4,6,3,2,4,5,2,5,6,3};
    double *ptr;
    ptr = arr;
    printf("Array size: %lu\n", (sizeof(double)));

    printf("BEFORE ADDITION:\n");
    for(int i = 0; i < (sizeof(arr) / 8); i++) {
        printf("%d: %lf\n", i, arr[i]);
    }

    addition(ptr, (sizeof(arr) / 8), 3);

    printf("AFTER ADDITION:\n");
    for(int i = 0; i < (sizeof(arr) / 8); i++) {
         printf("%d: %lf\n", i, arr[i]);
    }

    double arr2[] = {1,4,6,3,2,4,5,2,5,6,3};
    ptr = arr2;
    printf("BEFORE SUBTRACTION:\n");
    for(int i = 0; i < (sizeof(arr2) / 8); i++) {
        printf("%d: %lf\n", i, arr2[i]);
    }

    subtract(ptr, (sizeof(arr2) / 8), 3);

    printf("AFTER SUBTRACTION:\n");
    for(int i = 0; i < (sizeof(arr2) / 8); i++) {
         printf("%d: %lf\n", i, arr2[i]);
    }

    double arr3[] = {1,4,6,3,2,4,5,2,5,6,3};
    ptr = arr3;
    printf("BEFORE MULTIPLICATION:\n");
    for(int i = 0; i < (sizeof(arr3) / 8); i++) {
        printf("%d: %lf\n", i, arr3[i]);
    }

    multiplication(ptr, (sizeof(arr3) / 8), 3);

    printf("AFTER MULTIPLICATION:\n");
    for(int i = 0; i < (sizeof(arr3) / 8); i++) {
         printf("%d: %lf\n", i, arr3[i]);
    }

    double arr4[] = {1,4,6,3,2,4,5,2,5,6,3};
    ptr = arr4;
    printf("BEFORE DIVISION:\n");
    for(int i = 0; i < (sizeof(arr4) / 8); i++) {
        printf("%d: %lf\n", i, arr4[i]);
    }

    division(ptr, (sizeof(arr4) / 8), 3);

    printf("AFTER DIVISION:\n");
    for(int i = 0; i < (sizeof(arr4) / 8); i++) {
         printf("%d: %lf\n", i, arr4[i]);
    }

    double arr5[] = {1,4,6,3,2,4,5,2,5,6,3};
    ptr = arr5;
    printf("BEFORE DIVISION:\n");
    for(int i = 0; i < (sizeof(arr5) / 8); i++) {
        printf("%d: %lf\n", i, arr5[i]);
    }

    division(ptr, (sizeof(arr5) / 8), 3);

    printf("AFTER DIVISION:\n");
    for(int i = 0; i < (sizeof(arr5) / 8); i++) {
         printf("%d: %lf\n", i, arr5[i]);
    }

    double arr6[] = {1,4,6,3,2,4,5,2,5,6,3};
    ptr = arr6;
    printf("BEFORE SINE:\n");
    for(int i = 0; i < (sizeof(arr6) / 8); i++) {
        printf("%d: %lf\n", i, arr6[i]);
    }

    arrSin(ptr, (sizeof(arr6) / 8), 3, "sinf");

    printf("AFTER SINE:\n");
    for(int i = 0; i < (sizeof(arr6) / 8); i++) {
         printf("%d: %lf\n", i, arr6[i]);
    }
    return 0;
    
}