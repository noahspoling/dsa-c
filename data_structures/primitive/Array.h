#ifndef ARRAY_H
#define ARRAY_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Array {
    int length;
    int* data;
} Array;

Array* createArray(int length);
void Array_set(Array *array, int index, int value);
int Array_get(Array *array, int index);
void Array_append(Array *array, int value);
void deleteArray(Array* array);

#endif